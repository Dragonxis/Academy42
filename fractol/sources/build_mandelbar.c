/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_mandelbar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrigore <rgrigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 14:57:10 by rgrigore          #+#    #+#             */
/*   Updated: 2018/03/07 14:57:11 by rgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	calculate(t_thread *thr, int x, int y)
{
	t_complex	p;
	t_complex	n;
	t_complex	o;
	int			i;

	p.r = 1.5 * ((x - W_WIDTH / 2) / (thr->window->f_data.zoom * W_WIDTH) +
												thr->window->f_data.offset_x);
	p.i = (y - W_HEIGHT / 2) / (thr->window->f_data.zoom * W_HEIGHT) +
												thr->window->f_data.offset_y;
	n.r = 0;
	n.i = 0;
	i = -1;
	while (++i < thr->window->iter && n.r * n.r + n.i * n.i < 4)
	{
		o.r = n.r;
		n.i *= -1;
		n.r = n.r * n.r - n.i * n.i + p.r;
		n.i = 2 * n.i * o.r + p.i;
	}
	thr->window->image.pixel[x + y * W_WIDTH] =
		set_color(thr->window->f_data.color[thr->window->active_color],
			(float)i / thr->window->iter + !(i < thr->window->iter));
}

void		*build_mandelbar(void *thread)
{
	t_thread	*thr;
	int			y;
	int			x;

	thr = (t_thread*)thread;
	y = thr->start;
	while (y < W_HEIGHT && y < thr->start + thr->window->lpt)
	{
		x = -1;
		while (++x < W_WIDTH)
		{
			calculate(thr, x, y);
		}
		y++;
	}
	return (NULL);
}

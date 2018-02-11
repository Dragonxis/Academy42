/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unload_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrigore <rgrigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 12:35:15 by rgrigore          #+#    #+#             */
/*   Updated: 2018/02/08 12:35:16 by rgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	unload_map(t_data *data)
{
	free(data->mesh.points);
	free(data->mesh.lines);
	data->mesh.pct_count = 0;
	data->mesh.line_count = 0;
	data->mesh.width = 0;
	data->mesh.depth = 0;
	data->mesh.height_min = 0;
	data->mesh.height_max = 0;
	event_keyboard(NUM_5, data);
}

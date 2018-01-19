/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 11:03:14 by rgrigore          #+#    #+#             */
/*   Updated: 2017/12/07 07:35:02 by rgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nr[10];
	int		i;
	int		s;

	if (n < 0)
	{
		s = -1;
		write(fd, "-", 1);
	}
	else
		s = 1;
	i = 0;
	while (n || i == 0)
	{
		nr[i++] = (n % 10) * s + 48;
		n /= 10;
	}
	while (--i >= 0)
		write(fd, &nr[i], 1);
}

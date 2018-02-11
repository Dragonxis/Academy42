/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrigore <rgrigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 15:27:53 by rgrigore          #+#    #+#             */
/*   Updated: 2017/12/14 15:48:16 by rgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_sqrt(long long nr)
{
	long long	i;

	i = 2;
	while (i * i <= nr)
	{
		if (i * i == nr)
			return (i);
		i++;
	}
	return (0);
}

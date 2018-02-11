/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_color_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrigore <rgrigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 17:34:25 by rgrigore          #+#    #+#             */
/*   Updated: 2018/02/08 17:34:26 by rgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** Function for storing colors
*/

void	init_color_array(t_menu *menu)
{
	menu->color_count = 10;
	menu->left_color = 0;
	menu->right_color = 0;
	menu->colors[0] = 0X00FFFFFF;
	menu->colors[1] = 0X00000000;
	menu->colors[2] = 0X00FF0000;
	menu->colors[3] = 0X0000FF00;
	menu->colors[4] = 0X000000FF;
	menu->colors[5] = 0X00FFFF00;
	menu->colors[6] = 0X00FF7700;
	menu->colors[7] = 0X00A1A1F1;
	menu->colors[8] = 0X00FF00FF;
	menu->colors[9] = 0X00FF99FF;
}

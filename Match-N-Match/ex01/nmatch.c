/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 11:06:00 by rgrigore          #+#    #+#             */
/*   Updated: 2017/08/27 11:06:30 by rgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (s1[0] != '\0' && s2[0] == '*')
		return (nmatch(&s1[1], &s2[0]) + (nmatch(&s1[0], &s2[1])));
	if (s1[0] == '\0' && s2[0] == '*')
		return (nmatch(&s1[0], &s2[1]));
	if (s1[0] == s2[0] && s1[0] != '\0' && s2[0] != '\0')
		return (nmatch(&s1[1], &s2[1]));
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	return (0);
}

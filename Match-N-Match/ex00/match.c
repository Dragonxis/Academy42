/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 11:03:00 by rgrigore          #+#    #+#             */
/*   Updated: 2017/08/27 11:04:58 by rgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == s2[0] && s1[0] != '*' && s2[0] != '*')
		return (match(&s1[1], &s2[1]));
	if (s1[0] == '\0' && s2[0] == '*')
		return (match(&s1[0], &s2[1]));
	if (s1[0] != '\0' && s2[0] == '*')
		return (match(&s1[0], &s2[1]) || match(&s1[1], &s2[0]));
	return (0);
}

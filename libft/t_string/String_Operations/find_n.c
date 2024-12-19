/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:34:49 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 19:27:55 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	find_n(t_string *str, char *s, size_t pos, size_t n)
{
	size_t i;

	if (!str || !str->buffer || str->empty(str) || !s || *s == '\0'
		|| pos >= str->len(str) || n <= 0 || n > ft_strlen(s) || str->len(str)
		- pos < n)
		return (NOPOS);
	while (str->buffer[pos])
	{
		if (str->buffer[pos] == *s)
		{
			i = 0;
			while (str->buffer[pos + i] == s[i] && i < n)
			{
				if (i + 1 == n)
					return (pos);
				i++;
			}
		}
		pos++;
	}
	return (NOPOS);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_buffer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:34:49 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 16:31:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	find_buffer(t_string *str, char *s, size_t pos, size_t n)
{
	size_t i;

	if (!str || !str->buffer || str->empty(str) || !s || *s == '\0'
		|| pos >= str->len(str) || n > ft_strlen(str->buffer + pos))
		return (NOPOS);
	if (n > ft_strlen(s))
		n = ft_strlen(s);
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
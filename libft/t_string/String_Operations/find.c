/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:53:16 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 16:20:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t  find(t_string *str, t_string *s)
{
    size_t  i;
    size_t  j;

    if (!str || !str->buffer || str->empty(str) || !s || !s->buffer || s->empty(s) || s->len(s) > str->len(str))
        return (NOPOS);
    i = -1;
    while (str->buffer[++i])
	{
		if (str->buffer[i] == *s->buffer)
		{
			j = 0;
			while (str->buffer[i + j] == s->buffer[j])
			{
				if (s->buffer[j + 1] == '\0')
					return (i);
				j++;
			}
		}
	}
    return (NOPOS);
}
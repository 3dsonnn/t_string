/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:24:18 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 16:25:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	find_pos(t_string *str, t_string *s, size_t pos)
{
    size_t  i;

    if (!str || !str->buffer || str->empty(str) || !s || !s->buffer || s->empty(s) || pos >= str->len(str) || s->len(s) > ft_strlen(str->buffer + pos))
        return (NOPOS);
    while (str->buffer[pos])
    {
        if (str->buffer[pos] == *s->buffer)
        {
            i = 0;
            while (str->buffer[pos + i] == s->buffer[i])
            {
                if (s->buffer[i + 1] == '\0')
                    return (pos);
                i++;
            }
        }
        pos++;
    }
    return (NOPOS);
}
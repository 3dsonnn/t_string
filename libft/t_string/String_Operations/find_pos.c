/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:24:18 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 19:27:30 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	find_pos(t_string *str, char *s, size_t pos)
{
    size_t  i;

    if (!str || !str->buffer || str->empty(str) || !s || *s == '\0' || pos >= str->len(str))
        return (NOPOS);
    while (str->buffer[pos])
    {
        if (str->buffer[pos] == *s)
        {
            i = 0;
            while (str->buffer[pos + i] == s[i])
            {
                if (s[i + 1] == '\0')
                    return (pos);
                i++;
            }
        }
        pos++;
    }
    return (NOPOS);
}
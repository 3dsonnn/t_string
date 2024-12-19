/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:53:16 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 16:48:11 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t  find(t_string *str, char *s)
{
    size_t  i;
    size_t  j;

    if (!str || !str->buffer || str->empty(str) || !s || *s == '\0' || ft_strlen(s) > str->len(str))
        return (NOPOS);
    i = -1;
    while (str->buffer[++i])
	{
		if (str->buffer[i] == *s)
		{
			j = 0;
			while (str->buffer[i + j] == s[j])
			{
				if (s[j + 1] == '\0')
					return (i);
				j++;
			}
		}
	}
    return (NOPOS);
}
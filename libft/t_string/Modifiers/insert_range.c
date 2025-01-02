/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:36:15 by efinda            #+#    #+#             */
/*   Updated: 2025/01/02 16:35:43 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	insert_range(t_string *str, t_string *s, size_t first, size_t last, size_t pos)
{
    if (!str || !s || !s->buffer || (s->len(s) == 0 && (first != 0 || last != 0)) || first > s->len(s) || (!str->buffer && pos != 0) || (str->buffer && pos > str->len(str)))
        return ;
    if (s->len(s) == 0)
    {
        if (!str->buffer)
            str->empty(str);
        else
            str->buffer[pos] = '\0';
    }
    s->tmp = ft_substr(s->buffer, first, (last - first + 1));
    if (!str->buffer)
        str->buffer = s->tmp;
    else
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s->tmp);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        ft_strfree(&s->tmp);
    }
    s->tmp = NULL;
    str->tmp = NULL;
}
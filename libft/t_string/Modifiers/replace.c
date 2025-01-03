/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:12:05 by efinda            #+#    #+#             */
/*   Updated: 2025/01/03 04:51:23 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	replace(t_string *str, t_string *s, size_t pos, size_t len)
{
    if (!str || !s || (str->len(str) == 0 && s->len(s) == 0) || (str->len(str) == 0 && (pos != 0 || len != 0)) || (str->buffer && pos > str->len(str)))
        return ;
    if (str->buffer && len > str->len(str) - pos)
        len = str->len(str) - pos;
    if (str->len(str) == 0)
    {
        ft_strfree(&str->buffer);
        str->buffer = ft_strdup(s->buffer);
    }
    else if (s->len(s) == 0)
    {
        s->tmp = ft_strdup("");
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s->tmp);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos + len);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        ft_strfree(&s->tmp);
    }
    else
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s->buffer);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos + len);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
    }
    str->tmp = NULL;
}
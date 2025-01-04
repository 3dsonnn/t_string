/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_sub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 04:32:57 by efinda            #+#    #+#             */
/*   Updated: 2025/01/04 22:19:11 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	replace_sub(t_string *str, t_string *s, size_t pos, size_t len, size_t subpos, size_t sublen)
{
    if (!str || !s || (str->len(str) == 0 && (s->len(s) == 0 || pos != 0 || len != 0)) || (s->len(s) == 0 && (str->len(str) == 0 || subpos != 0 || sublen != 0)) || (str->len(str) > 0 && pos > str->len(str)) || (s->len(s) > 0 && subpos > s->len(s)))
        return ;
    if (str->len(str) > 0 && len > str->len(str) - pos)
        len = str->len(str) - pos;
    if (s->len(s) == 0)
    {
        str->replace(str, s, pos, len);
        return ;
    }
    s->tmp = ft_substr(s->buffer, subpos, sublen);
    if (!s->tmp)
        s->tmp = ft_strdup("");
    if (str->len(str) == 0)
    {
        ft_strfree(&str->buffer);
        str->buffer = s->tmp;
    }
    else
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s->tmp);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos + len);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
    ft_strfree(&s->tmp);
}
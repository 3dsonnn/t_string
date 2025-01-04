/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:00:29 by efinda            #+#    #+#             */
/*   Updated: 2025/01/04 22:30:38 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	replace_range(t_string *str, t_string *s, size_t first, size_t last, size_t s_first, size_t s_last)
{
    if (!str || !s || (str->len(str) == 0 && (s->len(s) == 0 || first != 0 || last != 0)) || (s->len(s) == 0 && (str->len(str) == 0 || s_first != 0 || s_last != 0)) || (str->len(str) > 0 && (first > str->len(str) || last > str->len(str))) || (s->len(s) > 0 && (s_first > s->len(s) || s_last > s->len(s))) || first < last || s_first < s_last)
        return ;
    if (s->len(s) == 0)
    {
        str->replace(str, s, first, last - first + 1);
        return ;
    }
    s->tmp = ft_substr(s->buffer, s_first, last - first + 1);
    if (!s->tmp)
        s->tmp = ft_strdup("");
    if (str->len(str) == 0)
    {
        ft_strfree(&str->buffer);
        str->buffer = s->tmp;
    }
    else
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, first), s->tmp);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + last + 1);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
    ft_strfree(&s->tmp);
}
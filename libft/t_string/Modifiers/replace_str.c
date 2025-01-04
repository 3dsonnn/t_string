/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 05:27:05 by efinda            #+#    #+#             */
/*   Updated: 2025/01/03 06:01:58 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	replace_str(t_string *str, char *s, size_t pos, size_t len)
{
    size_t  s_len;

    s_len = ft_strlen(s);
    if (!str || (str->len(str) == 0 && s_len == 0) || (str->len(str) == 0 && (pos != 0 || len != 0)) || (str->len(str) > 0 && pos > str->len(str)))
        return ;
    if (str->len(str) > 0 && len > str->len(str) - pos)
        len = str->len(str) - pos;
    if (str->len(str) == 0)
    {
        ft_strfree(&str->buffer);
        str->buffer = ft_strdup(s);
    }
    else if (s_len == 0)
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), "");
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos + len);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
    }
    else
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos + len);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
    }
    str->tmp = NULL;
}
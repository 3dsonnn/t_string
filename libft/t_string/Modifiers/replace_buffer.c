/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 05:44:28 by efinda            #+#    #+#             */
/*   Updated: 2025/01/04 21:55:40 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	replace_buffer(t_string *str, char *s, size_t pos, size_t len, size_t n)
{
    char    *aux;
    size_t  s_len;

    s_len = ft_strlen(s);
    if (!str || (str->len(str) == 0 && (s_len == 0 || pos != 0 || len != 0)) || (str->len(str) > 0 && pos > str->len(str)))
        return ;
    if (n > s_len)
        n = s_len;
    if (str->len(str) > 0 && len > str->len(str) - pos)
        len = str->len(str) - pos;
    str->tmp = ft_strndup(s, n);
    if (str->len(str) == 0)
    {
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
    else
    {
        aux = ft_strjoin_free(ft_strndup(str->buffer, pos), str->tmp);
        aux = ft_strjoin_free(aux, str->buffer + pos);
        ft_strfree(&str->buffer);
        str->buffer = aux;
        ft_strfree(&str->tmp);
    }
}
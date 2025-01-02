/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:22:35 by efinda            #+#    #+#             */
/*   Updated: 2025/01/02 12:51:37 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_buffer(t_string *str, char *s, size_t n)
{
    size_t len;

    len = ft_strlen(s);
    if (!str || len == 0 || n <= 0)
        return ;
    if (n > len)
        n = len;
    str->tmp = ft_strndup(s, n);
    if (!str->buffer)
    {
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
    else
    {
        str->buffer = ft_strjoin_free(str->buffer, str->tmp);
        ft_strfree(&str->tmp);
    }
}
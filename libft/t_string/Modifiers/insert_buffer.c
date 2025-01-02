/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:41:30 by efinda            #+#    #+#             */
/*   Updated: 2025/01/02 16:21:43 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	insert_buffer(t_string *str, char *s, size_t n, size_t pos)
{
    char    *aux;
    size_t  len;

    len = ft_strlen(s);
    if (!str || len == 0 || n == 0 || (!str->buffer && pos != 0) || (str->buffer && pos > str->len(str)))
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
        aux = ft_strjoin_free(ft_strndup(str->buffer, pos), str->tmp);
        aux = ft_strjoin_free(aux, str->buffer + pos);
        ft_strfree(&str->buffer);
        str->buffer = aux;
        ft_strfree(&str->tmp);
    }
}
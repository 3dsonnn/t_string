/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_fill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:56:44 by efinda            #+#    #+#             */
/*   Updated: 2025/01/04 22:12:51 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	replace_fill(t_string *str, size_t pos, size_t len, size_t n, char c)
{   
    char    *aux;

    if (!str || (str->len(str) == 0 && (pos != 0 || len != 0)) || (str->len(str) > 0 && pos > str->len(str)))
        return ;
    str->tmp = (char *)ft_calloc(n + 1, sizeof(char));
    ft_memset(str->tmp, c, n);
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
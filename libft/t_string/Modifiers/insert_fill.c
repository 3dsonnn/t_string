/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:30:50 by efinda            #+#    #+#             */
/*   Updated: 2025/01/02 14:29:29 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

static  void	does_not_insert_fill(t_string *str, size_t pos)
{
    if (!str->buffer)
        str->buffer = ft_strdup("");
    else
    {
        str->tmp = ft_strndup(str->buffer, pos);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
}

static  void	do_insert_fill(t_string *str, size_t pos)
{
    char    *aux;

    aux = ft_strjoin_free(ft_strndup(str->buffer, pos), str->tmp);
    aux = ft_strjoin_free(aux, str->buffer + pos);
    ft_strfree(&str->buffer);
    str->buffer = aux;
    ft_strfree(&str->tmp);
}

void	insert_fill(t_string *str, size_t n, char c, size_t pos)
{
    if (!str || (!str->buffer && pos != 0) || (str->buffer && pos > str->len(str)) || n == 0)
        return ;
    if (c == '\0')
    {
        does_not_insert_fill(str, pos);
        return ;
    }
    str->tmp = ft_calloc(n + 1, sizeof(char));
    if (!str->tmp)
        return ;
    ft_memset(str->tmp, c, n);
    if (pos == 0)
        str->buffer = str->tmp;
    else
        do_insert_fill(str, pos);
    str->tmp = NULL;
}
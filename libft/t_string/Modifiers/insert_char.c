/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:13:29 by efinda            #+#    #+#             */
/*   Updated: 2025/01/02 16:20:54 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

static  void	does_not_insert_char(t_string *str, size_t pos)
{
    if (!str->buffer)
        str->buffer = ft_strdup("");
    else
    {
        str->tmp = ft_strndup(str->buffer, pos);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
    }
}

static  void	do_insert_char(t_string *str, char c, size_t pos)
{    
    char    *aux;
    
    str->tmp = ft_ctoa(c);
    if (pos == 0)
        str->buffer = str->tmp;
    else
    {
        aux = ft_strjoin_free(ft_strndup(str->buffer, pos), str->tmp);
        aux = ft_strjoin_free(aux, str->buffer + pos);
        ft_strfree(&str->buffer);
        str->buffer = aux;
        ft_strfree(&str->tmp);
    }
}

void	insert_char(t_string *str, char c, size_t pos)
{
    if (!str || (!str->buffer && pos != 0) || (str->buffer && pos > str->len(str)))
        return ;
    if (c == '\0')
        does_not_insert_char(str, pos);
    else
        do_insert_char(str, c, pos);
    str->tmp = NULL;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_sub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 00:36:29 by efinda            #+#    #+#             */
/*   Updated: 2025/01/02 01:27:54 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	insert_sub(t_string *str, t_string *s, size_t subpos, size_t sublen, size_t pos)
{
    if (!s || !s->buffer || s->empty(s) || !str || (!str->buffer && pos != 0) || (str->buffer && pos > str->len(str)))
        return ;
    s->tmp = ft_substr(s->buffer, subpos, sublen);
    if (!s->tmp || !*s->tmp)
    {
        ft_strfree(&s->tmp);
        return ;
    }
    if (!str->buffer)
    {   
        str->buffer = s->tmp;
        s->tmp = NULL;
    }
    else
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s->tmp);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos);
        ft_strfree(&s->tmp);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
}
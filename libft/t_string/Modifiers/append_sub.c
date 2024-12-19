/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_sub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:58:44 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 19:28:59 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_sub(t_string *str, t_string *s, size_t subpos, size_t sublen)
{
    if (!str || !s || !s->buffer || s->empty(s) || subpos >= s->len(s))
        return ;
    s->tmp = ft_substr(s->buffer, subpos, sublen);
    if (!str->buffer)
    {
        str->buffer = s->tmp;
        s->tmp = NULL;
    }
    else
    {
        str->buffer = ft_strjoin_free(str->buffer, s->tmp);
        ft_strfree(&s->tmp);
    }
}
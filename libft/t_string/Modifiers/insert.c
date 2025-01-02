/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:37:33 by codespace         #+#    #+#             */
/*   Updated: 2025/01/01 18:19:41 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	insert(t_string *str, t_string *s, size_t pos)
{
    if (!s || !s->buffer || s->empty(s) || !str || (!str->buffer && pos != 0) || (str->buffer && pos > str->len(str)))
        return ;
    if (!str->buffer)
    {
        str->buffer = ft_strdup(s->buffer);
        return ;
    }
    str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s->buffer);
    str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos);
    ft_strfree(&str->buffer);
    str->buffer = str->tmp;
    str->tmp = NULL;
}
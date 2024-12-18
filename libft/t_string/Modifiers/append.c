/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:17:53 by efinda            #+#    #+#             */
/*   Updated: 2024/12/17 19:56:08 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    append(t_string *str, t_string *s)
{
    if (!str || !s || !s->buffer || s->empty(s))
        return ;
    if (!str->buffer)
        str->buffer = ft_strdup(s->buffer);
    else
        str->buffer = ft_strjoin_free(str->buffer, s->buffer);
}
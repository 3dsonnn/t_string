/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:17:53 by efinda            #+#    #+#             */
/*   Updated: 2025/01/07 13:52:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    append(t_string *str, t_string *s)
{
    if (!str || !s || !s->buffer || !*s->buffer)
        return ;
    if (!str->buffer || !*str->buffer)
    {
        ft_strfree(&str->buffer);
        str->buffer = ft_strdup(s->buffer);
    }
    else
        str->buffer = ft_strjoin_free(str->buffer, s->buffer);
}
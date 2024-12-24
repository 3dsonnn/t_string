/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:00:02 by efinda            #+#    #+#             */
/*   Updated: 2024/12/24 19:50:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    assign(t_string *str, t_string *s)
{
    if (!str || !s)
        return ;
    if (!str->buffer)
        str->buffer = s->buffer;
    else
    {
        ft_strfree(&str->buffer);
        str->buffer = s->buffer;
    }
}
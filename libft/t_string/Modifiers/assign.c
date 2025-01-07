/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:00:02 by efinda            #+#    #+#             */
/*   Updated: 2025/01/07 14:42:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    assign(t_string *str, t_string *s)
{
    if (!str || !s)
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    str->buffer = ft_strdup(s->buffer);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:34:06 by efinda            #+#    #+#             */
/*   Updated: 2024/12/18 01:34:35 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    push_back(t_string *str, char c)
{
    if (!str || c == '\0')
        return ;
    if (!str->buffer)
        str->buffer = ft_ctoa(c);
    else
        str->append_fill(str, 1, c);
}
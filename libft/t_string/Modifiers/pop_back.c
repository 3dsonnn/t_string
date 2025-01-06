/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:50:49 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 19:21:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    pop_back(t_string *str)
{
    if (!str || !str->buffer || !*str->buffer)
        return ;
    else
        str->buffer[str->len(str) - 1] = '\0';
}
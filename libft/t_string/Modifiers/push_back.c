/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:34:06 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 18:34:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    push_back(t_string *str, char c)
{
    if (!str || c == '\0')
        return ;
    str->tmp = ft_ctoa(c);
    if (!str->buffer || !*str->buffer)
    {
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
    else
        str->buffer = ft_strjoin_free_both(str->buffer, str->tmp);
}
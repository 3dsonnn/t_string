/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:07:08 by codespace         #+#    #+#             */
/*   Updated: 2024/12/24 20:25:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_buffer(t_string *str, char *s, size_t n)
{
    size_t  len;

    if (!str)
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    if (!s)
        return ;
    len = ft_strlen(s);
    if (n == 0 || len == 0)
        str->buffer = ft_strdup("");
    if (n > len)
        n = len;
    str->buffer = ft_strndup(s, n);  
}
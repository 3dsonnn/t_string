/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:07:08 by codespace         #+#    #+#             */
/*   Updated: 2025/01/07 14:49:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_buffer(t_string *str, char *s, size_t n)
{
    size_t  len;

    if (!str || !s || !*s || (long long)n <= 0)
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    len = ft_strlen(s);
    if (n > len)
        n = len;
    str->buffer = ft_strndup(s, n);  
}
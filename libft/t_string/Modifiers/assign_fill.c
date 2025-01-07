/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:26:33 by codespace         #+#    #+#             */
/*   Updated: 2025/01/07 14:54:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_fill(t_string *str, size_t n, char c)
{
    if (!str || (long long)n <= 0)
        return ;
    if (c == '\0')
    {
        if (str->buffer)
            ft_strfree(&str->buffer);
        str->buffer = ft_strdup("");
        return ;
    }
    str->tmp = (char *)ft_calloc(n + 1, sizeof(char));
    if (!str->tmp)
        return ;
    ft_memset(str->tmp, c, n);
    if (str->buffer)
        ft_strfree(&str->buffer);
    str->buffer = str->tmp;
    str->tmp = NULL;
}
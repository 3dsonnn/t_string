/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:49:35 by efinda            #+#    #+#             */
/*   Updated: 2025/01/07 14:06:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_fill(t_string *str, size_t n, char c)
{
    if (!str || (long long)n <= 0 || c == '\0')
        return ;
    str->tmp = (char *)ft_calloc(n + 1, sizeof(char));
    if (!str->tmp)
        return ;
    ft_memset(str->tmp, c, n);
    if (!str->buffer)
    {
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
    else
    {
        str->buffer = ft_strjoin_free(str->buffer, str->tmp);
        ft_strfree(&str->tmp);
    }
}
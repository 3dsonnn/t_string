/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:49:35 by efinda            #+#    #+#             */
/*   Updated: 2024/12/17 22:05:05 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_fill(t_string *str, size_t n, char c)
{
    if (!str || n <= 0 || c == '\0')
        return ;
    str->tmp = (char *)ft_calloc(n + 1, sizeof(char));
    if (!str->tmp)
        return ;
    ft_memset(str->tmp, c, n);
    if (!str->buffer)
        str->buffer = str->tmp;
    else
    {
        str->buffer = ft_strjoin_free(str->buffer, str->tmp);
        ft_strfree(&str->tmp);
    }
    str->tmp = NULL;
}
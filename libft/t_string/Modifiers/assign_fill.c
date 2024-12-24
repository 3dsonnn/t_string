/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:26:33 by codespace         #+#    #+#             */
/*   Updated: 2024/12/24 20:32:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_fill(t_string *str, size_t n, char c)
{
    if (!str)
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    if (n == 0 || c == '\0')
        str->buffer = ft_strdup("");
    str->buffer = (char *)ft_calloc(n + 1, sizeof(char));
    if (!str->buffer)
        return ;
    ft_memset(str->buffer, c, n);
}
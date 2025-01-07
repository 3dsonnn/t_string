/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:33:06 by codespace         #+#    #+#             */
/*   Updated: 2025/01/07 15:00:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_range(t_string *str, t_string *s, size_t first, size_t last)
{
    size_t  len;

    if (!str || !s || !s->buffer || !*s->buffer || (long long)first < 0 || (long long)last < 0)
        return ;
    len = s->len(s);
    if (first >= len)
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    if (last >= len)
        last = len - 1;
    if (first == last)
        s->buffer = ft_ctoa(s->buffer[first || last]);
    else
        s->buffer = ft_substr(s->buffer, first, (last - first + 1));
}
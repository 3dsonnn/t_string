/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:33:06 by codespace         #+#    #+#             */
/*   Updated: 2024/12/24 20:55:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_range(t_string *str, t_string *s, size_t first, size_t last)
{
    if (!str || !s || !s->buffer || s->empty(s) || first >= s->len(s))
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    if (last >= s->len(s))
        last = s->len(s) - 1;
    if (first == last)
        str->buffer = ft_ctoa(s->buffer[first || last]);
    else
        str->buffer = ft_substr(s->buffer, first, (last - first + 1));
}
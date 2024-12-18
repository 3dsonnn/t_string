/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:13:22 by efinda            #+#    #+#             */
/*   Updated: 2024/12/17 22:57:09 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_range(t_string *str, t_string *s, size_t first, size_t last)
{
    if (!str || !s || !s->buffer || s->empty(s) || first < 0 || first >= s->len(s) || last < 0)
        return ;
    if (last >= s->len(s))
        last = s->len(s) - 1;
    if (first == last)
        s->tmp = ft_ctoa(s->buffer[first || last]);
    else
        s->tmp = ft_substr(s->buffer, first, (last - first + 1));
    if (!str->buffer)
        str->buffer = s->tmp;
    else
    {
        str->buffer = ft_strjoin_free(str->buffer, s->tmp);
        ft_strfree(s->tmp);
    }
    s->tmp = NULL;
}
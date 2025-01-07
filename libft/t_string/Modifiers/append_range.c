/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:13:22 by efinda            #+#    #+#             */
/*   Updated: 2025/01/07 14:30:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_range(t_string *str, t_string *s, size_t first, size_t last)
{
    size_t  len;

    if (!str || !s || !s->buffer || !*s->buffer || (long long)first < 0 || (long long)last < 0)
        return ;
    len = s->len(s);
    if (first >= len)
        return ;
    if (last >= len)
        last = len - 1;
    if (first == last)
        s->tmp = ft_ctoa(s->buffer[first || last]);
    else
        s->tmp = ft_substr(s->buffer, first, (last - first + 1));
    if (!str->buffer || !*str->buffer)
    {
        ft_strfree(&str->buffer);
        str->buffer = s->tmp;
        s->tmp = NULL;
    }
    else
    {
        str->buffer = ft_strjoin_free(str->buffer, s->tmp);
        ft_strfree(&s->tmp);
    }
}
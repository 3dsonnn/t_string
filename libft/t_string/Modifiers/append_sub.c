/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_sub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 19:58:44 by efinda            #+#    #+#             */
/*   Updated: 2025/01/07 13:59:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_sub(t_string *str, t_string *s, size_t subpos, size_t sublen)
{
    if (!str || !s || !s->buffer || s->empty(s) || (long long)subpos < 0 || subpos >= s->len(s) || (long long)sublen <= 0)
        return ;
    s->tmp = ft_substr(s->buffer, subpos, sublen);
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
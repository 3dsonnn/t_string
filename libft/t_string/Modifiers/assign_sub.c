/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_sub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 19:53:52 by codespace         #+#    #+#             */
/*   Updated: 2025/01/07 14:43:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void    assign_sub(t_string *str, t_string *s, size_t subpos, size_t sublen)
{
    if (!str || !s || !s->buffer || (long long)subpos < 0 || (long long)sublen <= 0 || subpos >= s->len(s))
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    str->buffer = ft_substr(s->buffer, subpos, sublen);
}
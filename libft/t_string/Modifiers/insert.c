/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:37:33 by codespace         #+#    #+#             */
/*   Updated: 2025/01/07 15:06:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	insert(t_string *str, t_string *s, size_t pos)
{
    if (!s || !s->buffer || !*s->buffer || !str || (long long)pos < 0 || ((!str->buffer || !*str->buffer) && pos != 0) || (str->buffer && pos > str->len(str)))
        return ;
    if (!str->buffer || !*str->buffer)
    {
        ft_strfree(&str->buffer);
        str->buffer = ft_strdup(s->buffer);
        return ;
    }
    str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s->buffer);
    str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos);
    ft_strfree(&str->buffer);
    str->buffer = str->tmp;
    str->tmp = NULL;
}
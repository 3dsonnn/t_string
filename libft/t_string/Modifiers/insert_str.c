/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 01:34:03 by efinda            #+#    #+#             */
/*   Updated: 2025/01/02 16:22:12 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	insert_str(t_string *str, char *s, size_t pos)
{
    if (!str || !s || !*s || (!str->buffer && pos != 0) || (str->buffer && pos > str->len(str)))
        return ;
    if (!str->buffer)
        str->buffer = ft_strdup(s);
    else
    {
        str->tmp = ft_strjoin_free(ft_strndup(str->buffer, pos), s);
        str->tmp = ft_strjoin_free(str->tmp, str->buffer + pos);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
}
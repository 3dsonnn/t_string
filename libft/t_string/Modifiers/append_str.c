/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:14:52 by efinda            #+#    #+#             */
/*   Updated: 2025/01/07 14:01:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_str(t_string *str, char *s)
{
    if (!str || !s || !*s)
        return ;
    if (!str->buffer || !*str->buffer)
    {
        ft_strfree(&str->buffer);
        str->buffer = ft_strdup(s);
    }
    else
        str->buffer = ft_strjoin_free(str->buffer, s);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:14:52 by efinda            #+#    #+#             */
/*   Updated: 2024/12/17 21:19:48 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	append_str(t_string *str, char *s)
{
    if (!str || !s || ft_strlen(s) == 0)
        return ;
    if (!str->buffer)
        str->buffer = ft_strdup(s);
    else
        str->buffer = ft_strjoin_free(str->buffer, s);
}
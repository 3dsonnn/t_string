/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:03:22 by codespace         #+#    #+#             */
/*   Updated: 2025/01/07 14:44:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_str(t_string *str, char *s)
{
    if (!str)
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    str->buffer = ft_strdup(s);
}
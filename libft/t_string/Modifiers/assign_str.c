/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:03:22 by codespace         #+#    #+#             */
/*   Updated: 2024/12/24 20:06:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	assign_str(t_string *str, char *s)
{
    if (!str)
        return ;
    if (str->buffer)
        ft_strfree(&str->buffer);
    str->buffer = s;
}
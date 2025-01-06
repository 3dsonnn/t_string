/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:47:29 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:12:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	clear(t_string *str)
{
	if (!str)
		return ;
	if (str->buffer)
		ft_strfree(&str->buffer);
	str->buffer = ft_strdup("");
}

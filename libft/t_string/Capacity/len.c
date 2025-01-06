/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:48:12 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:34:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	len(t_string *str)
{
	size_t	i;

	i = 0;
	if (!str || !str->buffer)
		return (NOPOS);
	if (!*str->buffer)
		return (i);
	while (str->buffer[i])
		i++;
	return (i);
}

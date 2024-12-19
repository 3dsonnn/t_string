/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:04:48 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 19:28:18 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	find_char(t_string *str, char c, size_t pos)
{
	if (!str || !str->buffer || str->empty(str) || pos >= str->len(str))
		return (NOPOS);
	while (str->buffer[pos])
	{
		if (str->buffer[pos] == c)
			return (pos);
		pos++;
	}
	return (NOPOS);
}
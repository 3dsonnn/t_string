/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:34:44 by efinda            #+#    #+#             */
/*   Updated: 2024/12/15 20:34:45 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

char	at(t_string *str, size_t pos)
{
	if (!str || !str->buffer || (long long)pos < 0 || pos > str->len(str))
		return (NOCHR);
	return (str->buffer[pos]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:34:44 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:46:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

char	at(t_string *str, size_t pos)
{
	if (!str || !str->buffer || (long long)pos < 0 || pos >= str->len(str))
		return (NOCHR);
	return (str->buffer[pos]);
}

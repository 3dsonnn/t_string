/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:34:53 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:48:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

char	back(t_string *str)
{
	if (!str || !str->buffer || !*str->buffer)
		return (NOCHR);
	return (str->buffer[str->len(str) - 1]);
}

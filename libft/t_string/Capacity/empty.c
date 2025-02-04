/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:47:58 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:42:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

int	empty(t_string *str)
{
	if (!str || !str->buffer)
		return (0);
	if (!*str->buffer)
		return (1);
	return (0);
}

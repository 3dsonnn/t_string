/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:35:03 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:42:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

char	front(t_string *str)
{
	if (!str || !str->buffer || !*str->buffer)
		return (NOCHR);
	return (*str->buffer);
}

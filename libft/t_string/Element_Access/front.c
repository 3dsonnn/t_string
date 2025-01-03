/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:35:03 by efinda            #+#    #+#             */
/*   Updated: 2024/12/15 20:35:04 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

char	front(t_string *str)
{
	if (!str || !str->buffer || str->empty(str))
		return (NOCHR);
	return (str->buffer[str->begin(str)]);
}

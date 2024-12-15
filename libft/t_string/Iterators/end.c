/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:48:03 by efinda            #+#    #+#             */
/*   Updated: 2024/12/14 20:48:05 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	end(t_string *str)
{
	size_t	i;

	i = 0;
	if (!str || !str->buffer || str->empty(str))
		return (NOPOS);
	i = str->len(str);
	return (--i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:48:03 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:39:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	end(t_string *str)
{
	size_t	i;

	i = 0;
	if (!str || !str->buffer || !*str->buffer)
		return (NOPOS);
	i = str->len(str);
	return (--i);
}

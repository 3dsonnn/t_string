/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 22:45:31 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 23:00:48 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	erase_char(t_string *str, size_t pos)
{
	size_t i;
	size_t j;

	i = -1;
	j = 0;
	if (!str || !str->buffer || str->empty(str) || pos >= str->len(str))
		return ;
	str->buffer[pos] = NOCHR;
	str->tmp = (char *)ft_calloc(str->len(str), sizeof(char));
	while (str->buffer[++i])
	{
		if (str->buffer[i] == NOCHR)
			continue ;
		str->tmp[j] = str->buffer[i];
		j++;
	}
	ft_strfree(&str->buffer);
	str->buffer = str->tmp;
	str->tmp = NULL;
}
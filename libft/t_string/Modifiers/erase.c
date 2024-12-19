/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:53:44 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 22:25:27 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

static void	erase_aux(t_string *str, size_t pos, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str->tmp = (char *)ft_calloc(str->len(str) - len + 1, sizeof(char));
	while (str->buffer[i])
	{
		if (i == pos)
		{
			i += len;
			continue ;
		}
		str->tmp[j] = str->buffer[i];
		i++;
		j++;
	}
	ft_strfree(&str->buffer);
	str->buffer = str->tmp;
	str->tmp = NULL;
}

void	erase(t_string *str, size_t pos, size_t len)
{
	if (!str || !str->buffer || str->empty(str) || pos >= str->len(str)
		|| len <= 0)
		return ;
	if (len >= str->len(str) - pos)
	{
		str->tmp = ft_strndup(str->buffer, *(str->buffer + pos) - *str->buffer);
		ft_strfree(&str->buffer);
		str->buffer = str->tmp;
		str->tmp = NULL;
	}
	else
		erase_aux(str, pos, len);
}
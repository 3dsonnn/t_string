/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:34:51 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 19:43:44 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

static	int	resize_fill_aux(t_string *str, size_t n, char c)
{
	if (n == 0)
	{
		str->clear(str);
		return (1);
	}
	else if (!str->buffer)
	{
		str->buffer = (char *)ft_calloc(n + 1, sizeof(char));
		ft_memset(str->buffer, c, n);
		str->buffer[n + 1] = '\0';
		return (1);
	}
	return (0);
}

void	resize_fill(t_string *str, size_t n, char c)
{
	size_t	len;

	if (!str || (long long)n < 0 || (str->buffer && str->len(str) == n))
		return ;
	if (resize_fill_aux(str, n, c))
		return ;
	else
	{
		len = str->len(str);
		str->tmp = str->buffer;
		if (n < len)
			while (n < len)
				str->buffer[n++] = '\0';
		else
		{
			str->buffer = (char *)calloc(n + 1, sizeof(char));
			ft_strnfill(str->buffer, str->tmp, len);
			ft_memset(str->buffer + len, c, n - len);
			ft_strfree(&str->tmp);
		}
	}
	str->tmp = NULL;
}

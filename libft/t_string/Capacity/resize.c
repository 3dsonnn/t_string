/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:48:24 by efinda            #+#    #+#             */
/*   Updated: 2024/12/14 20:48:25 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	resize(t_string *str, size_t n)
{
	size_t	len;

	if (!str || (long long)n < 0 || (str->buffer && str->len(str) == n))
		return ;
	if (n == 0)
		str->clear(str);
	else if (!str->buffer)
		str->buffer = (char *)ft_calloc(n + 1, sizeof(char));
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
			ft_strfree(&str->tmp);
		}
	}
	str->tmp = NULL;
}

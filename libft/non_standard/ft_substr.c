/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 01:00:15 by efinda            #+#    #+#             */
/*   Updated: 2025/01/03 23:28:45 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	int		s_len;

	if (!s || len == 0)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > (unsigned int)s_len)
		return (NULL);
	if (start == (unsigned int)s_len)
	{
		if (len == 1)
			return (ft_strdup(""));
		else
			return (NULL);
	}
	if (len > (s_len - start))
		len = s_len - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}

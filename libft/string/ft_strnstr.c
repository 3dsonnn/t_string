/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 00:49:43 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 19:19:20 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big || *big == '\0' || !little || *little == '\0'
		|| ft_strlen(little) > ft_strlen(big) || n > ft_strlen(big))
		return (NULL);
	while (big[i] && i < n)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && (i + j) < n)
			{
				if (little[j + 1] == '\0')
					return ((char *)(&big[i]));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

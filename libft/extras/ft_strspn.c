/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 06:42:11 by efinda            #+#    #+#             */
/*   Updated: 2024/11/14 06:42:16 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strspn(char *s, char *accept)
{
	int	i;

	i = -1;
	if (!s || !accept)
		return (-1);
	while (s[++i])
		if (!ft_strchr(accept, s[i]))
			break ;
	return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:03:21 by efinda            #+#    #+#             */
/*   Updated: 2024/12/17 19:39:59 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_free(char *str, char *buffer)
{
	char	*new_str;
	int		lstr;
	int		lbuffer;

	if (!str && buffer)
		return (ft_strdup(buffer));
	if (!buffer && str)
		return (str);
	if (!str && !buffer)
		return (NULL);
	lstr = ft_strlen(str);
	lbuffer = ft_strlen(buffer);
	new_str = (char *)malloc(sizeof(char) * (lstr + lbuffer + 1));
	if (!new_str)
	{
		ft_strfree(&str);
		return (NULL);
	}
	new_str = ft_join(new_str, str, buffer);
	ft_strfree(&str);
	return (new_str);
}
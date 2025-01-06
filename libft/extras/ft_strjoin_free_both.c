/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_both.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:56:50 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 18:36:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_free_both(char *str, char *buffer)
{
	char	*new_str;
	int		lstr;
	int		lbuffer;

	if (!str && !buffer)
		return (NULL);
	if (!str && buffer)
		return (ft_strdup(buffer));
	if (str && !buffer)
		return (ft_strdup(str));
	lstr = ft_strlen(str);
	lbuffer = ft_strlen(buffer);
	new_str = (char *)malloc(sizeof(char) * (lstr + lbuffer + 1));
	if (!new_str)
		return (NULL);
	new_str = ft_join(new_str, str, buffer);
	ft_strfree(&str);
	ft_strfree(&buffer);
	return (new_str);
}

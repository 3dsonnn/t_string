/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:11:36 by efinda            #+#    #+#             */
/*   Updated: 2024/12/16 00:29:26 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Input 3 args: str, n, and c\n");
		return (1);
	}
	t_string	str;
	size_t	n = ft_atoi(av[2]);
	char	c = *av[3];
	
	printf("The args inputed are: %s\t%ld\t%c\n", av[1], n, c);

	str.constructor = &constructor;
	str.constructor(&str, ft_strdup(av[1]));

	str.resize(&str, n);
	resize_and_fill(&str, n, c);
	
	printf("The str became '%s', and it has %ld chars\n", str.buffer, str.len(&str));
	str.clear(&str);
	str.destructor(&str);
	return (0);
}

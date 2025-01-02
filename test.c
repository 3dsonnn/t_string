/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:11:36 by efinda            #+#    #+#             */
/*   Updated: 2025/01/01 19:18:48 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft/libft.h"

void	resize_test(char **av)
{	
	t_string	str;
	size_t	n = ft_atoi(av[2]);
	char	c = *av[3];
	
	printf("The args inputed are: \"%s\"\t%ld\t%c\n", av[1], n, c);

	str.constructor = &constructor;
	str.constructor(&str, ft_strdup(av[1]));

	str.resize(&str, n);
	str.resize_fill(&str, n, c);
	
	printf("The str became \"%s\", and it has %ld chars\n", str.buffer, str.len(&str));
	str.destructor(&str);
}

void	insert_test(char **av)
{
	t_string	str;
	t_string	s;
	size_t	pos = ft_atoi(av[3]);
	
	printf("The args inputed are: \"%s\"\t\"%s\"\t%ld\n", av[1], av[2], pos);

	str.constructor = &constructor;
	str.constructor(&str, ft_strdup(av[1]));
	s.constructor = &constructor;
	s.constructor(&s, ft_strdup(av[2]));

	str.insert(&str, &s, pos);
	
	printf("After the inserction, str became \"%s\"\n", str.buffer);
	str.destructor(&str);
	s.destructor(&s);
}

int	main(int ac, char **av)
{
	if (ac != 5)
	{
		printf("Input 4 args:\n\toption\n\t\t0 - resize_test\n\t\t1 - insert_test\nFor option 0: str, n, and c\nFor option 1: str, s and pos\n");
		return (1);
	}
	if (strcmp(av[1], "0") && strcmp(av[1], "1"))
	{
		printf("\"%s\" is an invalid option. Choose between 0 for resize_test and 1 for insert_test\n", av[1]);
		return (1);
	}
	if (*av[1] == '0')
		resize_test(&av[1]);
	else
		insert_test(&av[1]);
	return (0);
}

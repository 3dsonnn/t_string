/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 07:11:36 by efinda            #+#    #+#             */
/*   Updated: 2024/12/16 00:15:23 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (printf("At least an argument is required\n"));
	t_string	str;

	str.constructor = &constructor;
	str.constructor(&str, ft_strdup(av[1]));
	str.clear(&str);
	printf("%s has %ld chars\n", str.buffer, str.len(&str));
	str.destructor(&str);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:47:50 by efinda            #+#    #+#             */
/*   Updated: 2024/12/14 20:47:51 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	destructor(t_string *str)
{
	if (!str || !str->buffer)
		return ;
	ft_strfree(&str->buffer);
	ft_strfree(&str->tmp);
}

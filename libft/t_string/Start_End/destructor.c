/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:47:50 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:08:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	destructor(t_string *str)
{
	if (!str)
		return ;
	ft_strfree(&str->buffer);
	ft_strfree(&str->tmp);
}

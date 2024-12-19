/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 23:04:08 by efinda            #+#    #+#             */
/*   Updated: 2024/12/19 23:34:21 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	erase_range_aux(t_string *str, size_t first, size_t last, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    str->tmp = (char *)ft_calloc((len - (last - first)), sizeof(char));
    while (str->buffer[i])
    {
        if (i == first)
        {
            i = last + 1;
            continue ;
        }
        str->tmp[j] = str->buffer[i]; 
        j++;
        i++;
    }
    ft_strfree(&str->buffer);
    str->buffer = str->tmp;
    str->tmp = NULL;
}

void	erase_range(t_string *str, size_t first, size_t last)
{
	size_t  len;

    if (!str || !str->buffer || str->empty(str))
		return ;
    len = str->len(str);
    if (first >= len)
        return ;
    if (last >= len || last == len - 1)
    {
        str->tmp = (char *)ft_calloc(first + 1, sizeof(char));
        ft_strlcpy(str->tmp, str->buffer, first + 1);
        ft_strfree(&str->buffer);
        str->buffer = str->tmp;
        str->tmp = NULL;
    }
    else
        erase_range_aux(str, first, last, len);
}
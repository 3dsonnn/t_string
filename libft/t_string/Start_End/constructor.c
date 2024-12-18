c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:47:33 by efinda            #+#    #+#             */
/*   Updated: 2024/12/14 20:47:34 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"
/*
static	void	constructor_2(t_string *str)
{
	str->append_fill = &append_fill;
	str->append_range = &append_range;
	str->assign = &assign;
	str->assign_substr = &assign_substr;
	str->assign_n = &assign_n;
	str->assign_fill = &assign_fill;
	str->assign_range = &assign_range;
	str->insert = &insert;
	str->insert_substr = &insert_substr;
	str->insert_n = &insert_n;
	str->insert_fill = &insert_fill;
	str->insert_char = &insert_char;
	str->insert_range = &insert_range;
	str->erase = &erase;
	str->erase_char = &erase_char;
	str->erase_range = &erase_range;
	str->replace = &replace;
	str->replace_substr = &replace_substr;
	str->replace_n = &replace_n;
	str->replace_fill = &replace_fill;
	str->replace_range = &replace_range;
}

static	void	constructor_1(t_string *str)
{
	str->find_first_not_of = &find_first_not_of;
	str->find_first_not_of_n = &find_first_not_of_n;
	str->find_first_not_of_char = &find_first_not_of_char;
	str->find_first_not_of_range = &find_first_not_of_range;
	str->find_last_not_of = &find_last_not_of;
	str->find_last_not_of_n = &find_last_not_of_n;
	str->find_last_not_of_char = &find_last_not_of_char;
	str->find_last_not_of_range = &find_last_not_of_range;
	str->substr = &substr;
	str->swap = &swap;
	str->push_back = &push_back;
	str->pop_back = &pop_back;
	str->append = &append;
	str->append_substr = &append_substr;
	str->append_n = &append_n;
	constructor_2(str);
}*/

void	constructor(t_string *str, char *content)
{
	if (!str)
		return ;
	str->buffer = content;
	str->tmp = NULL;
	str->destructor = &destructor;
	str->begin = &begin;
	str->end = &end;
	str->len = &len;
	str->max = &max;
	str->resize = &resize;
	str->resize_fill = &resize_fill;
	str->clear = &clear;
	str->empty = &empty;
	str->at = &at;
	str->back = &back;
	str->front = &front;
/*	str->copy = &copy;
	str->find = &find;
	str->find_n = &find_n;
	str->find_char = &find_char;
	str->rfind = &rfind;
	str->rfind_char = &rfind_char;
	str->rfind_n = &rfind_n;
*/	//constructor_1(str);
}

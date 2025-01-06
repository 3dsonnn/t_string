/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:47:33 by efinda            #+#    #+#             */
/*   Updated: 2025/01/06 17:03:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

static	void	constructor_2(t_string *str)
{
	//	Replace
	str->replace = &replace;
	str->replace_sub = &replace_sub;
	str->replace_str = &replace_str;
	str->replace_buffer = &replace_buffer;
	str->replace_fill = &replace_fill;
	str->replace_range = &replace_range;
//	String Operations
	str->c_str = &c_str;
	//	Find's
	str->find = &find;
	str->find_pos = &find_pos;
	str->find_buffer = &find_buffer;
	str->find_char = &find_char;
	/*str->rfind = &rfind;
	str->rfind_char = &rfind_char;
	str->rfind_n = &rfind_n;
	str->find_first_not_of = &find_first_not_of;
	str->find_first_not_of_n = &find_first_not_of_n;
	str->find_first_not_of_char = &find_first_not_of_char;
	str->find_first_not_of_range = &find_first_not_of_range;
	str->find_last_not_of = &find_last_not_of;
	str->find_last_not_of_n = &find_last_not_of_n;
	str->find_last_not_of_char = &find_last_not_of_char;
	str->find_last_not_of_range = &find_last_not_of_range;
	str->substr = &substr;*/
}

static	void	constructor_1(t_string *str)
{
//	Append
	str->append = &append;
	str->append_sub = &append_sub;
	str->append_str = &append_str;
	str->append_buffer = &append_buffer;
	str->append_fill = &append_fill;
	str->append_range = &append_range;
//	Assign
	str->assign = &assign;
	str->assign_sub = &assign_sub;
	str->assign_str = &assign_str;
	str->assign_buffer = &assign_buffer;
	str->assign_fill = &assign_fill;
	str->assign_range = &assign_range;
//	Insert
	str->insert = &insert;
	str->insert_sub = &insert_sub;
	str->insert_str = &insert_str;
	str->insert_buffer = &insert_buffer;
	str->insert_fill = &insert_fill;
	str->insert_char = &insert_char;
	str->insert_range = &insert_range;
//	Erase
	str->erase = &erase;
	str->erase_char = &erase_char;
	str->erase_range = &erase_range;
	constructor_2(str);
}

void	constructor(t_string *str, char *content)
{
	if (!str)
		return ;
	str->tmp = NULL;
	str->buffer = content;
	str->destructor = &destructor;
//	Iterators
	str->begin = &begin;
	str->end = &end;
//	Capacity
	str->len = &len;
	str->clear = &clear;
	str->resize = &resize;
	str->resize_fill = &resize_fill;
	str->empty = &empty;
	str->max = &max;
//	Element	Access
	str->front = &front;
	str->at = &at;
	str->back = &back;
//	Modifiers
	str->swap = &swap;
	str->push_back = &push_back;
	str->pop_back = &pop_back;
	constructor_1(str);
}

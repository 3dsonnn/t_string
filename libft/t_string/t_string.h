/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:39:19 by efinda            #+#    #+#             */
/*   Updated: 2024/12/17 14:34:23 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STRING_H
# define T_STRING_H

# include "../libft.h"

# define NOPOS	-1
# define NOCHR	26

typedef	struct s_string t_string;

struct s_string
{
	char	*tmp;
	char	*buffer;
	//	Start_End
	void	(*constructor)(t_string *str, char *content);
	void	(*destructor)(t_string *str);
	//	Iterators
	int	(*begin)(t_string *str);
	size_t	(*end)(t_string *str);
	//	Capacity
	size_t	(*len)(t_string *str);
	void	(*clear)(t_string *str);
	void	(*resize)(t_string *str, size_t n);
	void	(*resize_and_fill)(t_string *str, size_t n, char c);
	int	(*empty)(t_string *str);
	size_t	(*max)(t_string *str);
	//	Element	Access
	char	(*front)(t_string *str);
	char	(*at)(t_string *str, size_t pos);
	char	(*back)(t_string *str);
	//	String Operations
	int	(*copy)(t_string s, size_t pos, char *str, size_t len);
		//	FIND'S
		size_t	(*find)(t_string s, char *str);
		size_t	(*find_n)(t_string s, char *str, size_t pos, size_t count); //	count is the number of char to consider from str
		size_t	(*find_char)(t_string s, char c);
		size_t	(*rfind)(t_string s, char *str);	// finds the last occurence of str
		size_t	(*rfind_char)(t_string s, char c);
		size_t	(*rfind_n)(t_string s, char *str, size_t pos, size_t count);
		size_t	(*find_first_not_of)(t_string s, char *str);
		size_t	(*find_first_not_of_n)(t_string s, size_t pos, char *str);
		size_t	(*find_first_not_of_char)(t_string s, char c);
		size_t	(*find_first_not_of_range)(t_string s, char *str, size_t pos, size_t count);
		
		size_t	(*find_last_not_of)(t_string s, char *str);
		size_t	(*find_last_not_of_n)(t_string s, size_t pos, char *str);
		size_t	(*find_last_not_of_char)(t_string s, char c);
		size_t	(*find_last_not_of_range)(t_string s, char *str, size_t pos, size_t count); //	count is the number of char to consider from str
		char	*(*substr)(t_string s, size_t pos, size_t len);
	//	Modifiers
	void	(*swap)(t_string *str, t_string *swap);
	void	(*push_back)(t_string *str, char c);
	void	(*pop_back)(t_string *str, char c);
		//	APPEND'S
		void	(*append)(t_string *s, char *str);
		void	(*append_substr)(t_string *s, char *str, size_t start, size_t len);
		void	(*append_n)(t_string *s, char *str, size_t len);
		void	(*append_fill)(t_string *s, int n, char c);
		void	(*append_range)(t_string *s, int start, int end);
		//	ASSIGN'S
		void	(*assign)(t_string *s, char *str);
		void	(*assign_substr)(t_string *s, char *str, size_t start, size_t len);
		void	(*assign_n)(t_string *s, char *str, size_t len);
		void	(*assign_fill)(t_string *s, int n, char c);
		void	(*assign_range)(t_string *s, int start, int end);
		//	INSERT'S
		void	(*insert)(t_string *s, size_t pos, char *str);
		void	(*insert_substr)(t_string *s, size_t pos, char *str, size_t start, size_t len);
		void	(*insert_n)(t_string *s, size_t pos, char *str, size_t len);	// inserts len chars of str starting from pos
		void	(*insert_fill)(t_string *s, size_t pos, int n, char c);
		void	(*insert_char)(t_string *s, size_t pos, char c);
		void	(*insert_range)(t_string *s, size_t pos, char *str, int start, int end);	// inserts chars of str starting on it from start to end
		//	ERASE'S
		void	(*erase)(t_string *s, size_t pos, size_t len);
		void	(*erase_char)(t_string *s,char c);
		void	(*erase_range)(t_string *s, int start, int end);
		//	REPLACE'S
		void	(*replace)(t_string *s, size_t pos, size_t r_len, char *str);
		void	(*replace_substr)(t_string *s, size_t pos, size_t r_len, char *str, size_t start, size_t len);
		void	(*replace_n)(t_string *s, size_t pos, size_t r_len, char *str);	// replace r_len chars of *str (starting at pos) by str
		void	(*replace_fill)(t_string *s, size_t pos, size_t r_len, int n, char c);
		void	(*replace_range)(t_string *s, size_t pos, size_t r_len, char *str, size_t len); // replace r_len chars of *str (starting at pos) by len chars of str
};

void	destructor(t_string *str);
void	constructor(t_string *str, char *content);

int	begin(t_string *str);
size_t	end(t_string *str);

size_t	len(t_string *str);
void	clear(t_string *str);
void	resize(t_string *str, size_t n);
void	resize_and_fill(t_string *str, size_t n, char c);
int	empty(t_string *str);
size_t	max(t_string *str);

char	front(t_string *str);
char	at(t_string *str, size_t pos);
char	back(t_string *str);

#endif

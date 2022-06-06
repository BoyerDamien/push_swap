/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:32:33 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 14:45:06 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_element
{
	long				content;
	struct s_element	*previous;
	struct s_element	*next;
}	t_element;

typedef struct s_list
{
	int					size;
	struct s_element	*first;

	void				(*append)(struct s_list*, long);
	void				(*clear)(struct s_list*);
	void				(*remove)(struct s_list*, t_element*);
	void				(*iter)(struct s_list *, void (*f)(t_element*));
	int					(*iter_with_ret)(struct s_list*, int (*f)(t_element*));
	void				(*insert_before)(struct s_list*, t_element*, long);
	struct	s_list		*(*concat)(struct s_list*, struct s_list*);
	struct	s_list		*(*copy)(struct s_list*);
	struct	s_list		(*map)(struct s_list*, int (*f)(t_element*));
	t_element			*(*last)(struct s_list*);

	t_element			*(*get)(struct s_list*, long);
	t_element			*(*search)(struct s_list*, long, \
						int (*f)(t_element *, long));
}	t_list;

void					ft_add_back(t_list *list, long content);
void					ft_del(t_list *list, t_element *element);
void					ft_clear(t_list *list);
void					ft_list_iter(t_list *self, \
						void (*f)(t_element *element));
int						ft_list_iter_ret(t_list *self, \
						int (*f)(t_element *element));
void					ft_insert_before(t_list *list, \
						t_element *element, long content);
t_element				*ft_list_get_last(t_list *self);

t_element				*ft_search(t_list *element, long content, \
						int (*f)(t_element *element, long content));
t_element				*ft_new_element(long content);

t_list					*ft_list(void);
t_list					*ft_concat(t_list *list1, t_list *list2);
t_list					*ft_list_copy(t_list *list);

#	endif

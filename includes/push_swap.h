/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:55:03 by dboyer            #+#    #+#             */
/*   Updated: 2022/08/15 15:08:38 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_list.h"
# include <stddef.h>
# include <unistd.h>

typedef enum e_bool
{
	false,
	true,
}	t_bool;

typedef struct s_error
{
	char	*message;
	void	(*show)();
}			t_error;

t_error			*ft_new_error(char *message);

void			ft_error_show(t_error *error);

// Stack object
typedef struct s_st
{
	t_list		*list;
	char		stack_name;

	void		(*push)(struct s_st*, long);
	t_element	*(*pop)(struct s_st*);
	void		(*swap)(struct s_st*);
	void		(*rotate)(struct s_st*);
	void		(*reverse_rotate)(struct s_st*);
	void		(*push_to)(struct s_st*, struct s_st*);
	void		(*clear)(struct s_st*);
	void		(*show)(struct s_st*);
	t_bool		(*empty)(struct s_st *);
	t_bool		(*is_sorted)(struct s_st *);
	t_bool		(*is_swappable)(struct s_st *);
	t_bool		(*is_pushable)(struct s_st *);
}				t_stack;

t_stack			*ft_new_stack(char stack_name);
t_stack			*ft_new_stack_with_args(char stack_name, int argc, char **argv);

t_element		*ft_stack_pop(t_stack *self);
void			ft_stack_push(t_stack *self, long element);
void			ft_stack_swap(t_stack *self);
void			ft_stack_rotate(t_stack *self);
void			ft_stack_reverse_rotate(t_stack *self);
void			ft_stack_push_to(t_stack *self, t_stack *other);
void			ft_stack_show(t_stack *self);
void			ft_stack_clear(t_stack *self);
t_bool			ft_stack_isempty(t_stack *self);
t_bool			ft_is_sorted(t_stack *self);
t_bool			ft_stack_is_swappable(t_stack *self);
t_bool			ft_stack_is_mergeable(t_stack *b, const t_stack *a);
t_bool			ft_is_pushable(t_stack *self);

void			ft_putchar(char c);
void			ft_putstr(char *str);
t_bool			ft_less_than(char *n1, char *n2);
t_bool			ft_greater_than(char *n1, char *n2);

long int		ft_atoi(char *str);

t_bool			ft_isspace(char c);
t_bool			ft_isdigit(char c);
t_bool			ft_isnumber(char *str);
void			ft_putnbr(long int nb);
size_t			ft_strlen(char *str);

t_error			*ft_check_args(int argc, char **argv);
t_error			*ft_sort_stack(t_stack *a, t_stack *b);

t_bool			ft_is_swappable(t_list *list, t_element *element);

void			ft_stack_repare(t_stack *self);

#endif

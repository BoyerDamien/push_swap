/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_swappable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:25 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 11:06:39 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_swappable(t_stack *self)
{
	t_bool		result;
	int			first;
	int			next;
	int			next_next;

	first = self->list->first->content;
	next = self->list->first->next->content;
	next_next = self->list->first->next->next->content;
	result = first > next;
	if (self->list->size > 2)
		result = (result && first < next_next && first != self->max_value)
			|| (first == self->min_value && next == self->max_value);
	return (result);
}

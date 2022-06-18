/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_pushable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:22:48 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/18 15:14:22 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	ft_is_pushable(t_stack *self)
{
	t_bool	result;
	int		first;
	int		next;
	int		next_next;

	result = false;
	first = self->list->first->content;
	next = self->list->first->next->content;
	next_next = self->list->first->next->next->content;
	if (first == self->list->min || first == self->list->max)
		result = false;
	else
		result = (first > next && first > next_next && self->list->size > 3);
	return (result);
}

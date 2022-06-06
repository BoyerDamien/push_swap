/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_swappable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:25 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:06 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_swappable(t_stack *self)
{
	t_bool result;

	result = self->list->first->content > self->list->first->next->content;
	if (self->list->size > 2)
		result = (result
				&& self->list->first->content < self->list->first->next->next->content
				&& self->list->first->content != self->max_value)
			|| (self->list->first->content == self->min_value
				&& self->list->first->next->content == self->max_value);
	return (result);
}
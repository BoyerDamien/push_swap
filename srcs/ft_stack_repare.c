/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_repare.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:59:31 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/18 20:24:05 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_repare(t_stack *self)
{
	int index;
	int rev_index;

	index = self->list->index_of(self->list, self->min_value);
	rev_index = self->list->index_of_reverse(self->list, self->min_value);
	while (self->list->first->content != self->list->min)
	{
		if (index <= rev_index)
			self->rotate(self);
		else
			self->reverse_rotate(self);
	}
}
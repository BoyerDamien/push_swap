/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_repare.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:59:31 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/18 15:52:27 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_repare(t_stack *self)
{
	int min_index;

	min_index = self->list->index_of(self->list, self->min_value);
	while (self->list->first->content != self->list->min)
	{
		if (min_index + 1 < self->list->size / 2)
			self->rotate(self);
		else
			self->reverse_rotate(self);
	}
}
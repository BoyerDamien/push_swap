/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:47 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:19 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_stack_swap(t_stack *self)
{
	t_element	*first;
	t_element	*second;

	if (self->list->size >= 2)
	{
		first = self->pop(self);
		second = self->pop(self);
		if (first != NULL)
			self->push(self, first);
		if (second != NULL)
			self->push(self, second);
		free(first);
		free(second);
		ft_putchar('s');
		ft_putchar(self->stack_name);
		ft_putchar('\n');
	}
}

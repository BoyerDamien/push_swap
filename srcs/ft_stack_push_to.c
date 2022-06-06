/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push_to.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:37 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:12 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"

void	ft_stack_push_to(t_stack *self, t_stack *other)
{
	t_element	*tmp;

	if (!self->empty(self))
	{
		tmp = self->pop(self);
		if (tmp && other)
		{
			other->push(other, tmp->content);
			free(tmp);
			ft_putchar('p');
			ft_putchar(other->stack_name);
			ft_putchar('\n');
		}
	}
}

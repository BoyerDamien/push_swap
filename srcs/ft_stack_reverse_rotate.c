/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:40 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:15 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_reverse_rotate(t_stack *self)
{
	self->list->first = self->list->last(self->list);
	ft_putstr("rr");
	ft_putchar(self->stack_name);
	ft_putchar('\n');
}

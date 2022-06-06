/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:42 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:16 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"

void	ft_stack_rotate(t_stack *self)
{
	self->list->first = self->list->first->next;
	ft_putchar('r');
	ft_putchar(self->stack_name);
	ft_putchar('\n');
}

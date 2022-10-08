/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:38 by dboyer            #+#    #+#             */
/*   Updated: 2022/10/08 14:06:49 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_push(t_stack *self, t_element *element)
{
	self->list->insert_before(self->list, self->list->first, \
		element->content, element->label);
	self->list->min = ft_list_min(self->list);
	self->list->max = ft_list_max(self->list);
}

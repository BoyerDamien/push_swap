/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:35 by dboyer            #+#    #+#             */
/*   Updated: 2022/07/14 18:18:57 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"

t_element	*ft_stack_pop(t_stack *self)
{
	t_element	*result;

	if (!self->empty(self))
	{
		result = ft_new_element_from_element(self->list->first);
		self->list->remove(self->list, self->list->first);
		self->list->min = ft_list_min(self->list);
		self->list->max = ft_list_max(self->list);
		return (result);
	}
	return (NULL);
}

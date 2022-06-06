/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:35 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:10 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"

t_element	*ft_stack_pop(t_stack *self)
{
	t_element	*result;

	if (!self->empty(self))
	{
		result = ft_new_element(self->list->first->content);
		self->list->remove(self->list, self->list->first);
		return (result);
	}
	return (NULL);
}

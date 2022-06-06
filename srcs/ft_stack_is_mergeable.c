/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_mergeable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:23 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:05 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	ft_stack_is_mergeable(t_stack *b, t_stack *a)
{
	t_bool result;

	result = false;
	if (!b->empty(b))
	{
		if (a->list->first->content == a->max_value)
			result = b->list->first->content > a->list->first->previous->content;
		else if (a->list->first->content == a->min_value)
			result = b->list->first->content == a->max_value;
		else
			result = b->list->first->content < a->list->first->content
				&& b->list->first->content > a->list->first->previous->content;
	}
	return (result);
}
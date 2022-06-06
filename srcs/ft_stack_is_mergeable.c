/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_mergeable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:23 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 15:08:15 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	ft_stack_is_mergeable(t_stack *b, t_stack *a)
{
	t_bool	result;
	int		b_first;
	int		a_previous;
	int		a_first;

	result = false;
	if (!b->empty(b))
	{
		a_previous = a->list->first->previous->content;
		a_first = a->list->first->content;
		b_first = b->list->first->content;
		if (a_first == a->max_value)
			result = b_first > a_previous;
		else if (a_first == a->min_value)
			result = b_first == a->max_value;
		else
			result = (b_first < a_first && b_first > a_previous);
	}
	return (result);
}

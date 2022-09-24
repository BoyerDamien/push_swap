/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_mergeable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:23 by dboyer            #+#    #+#             */
/*   Updated: 2022/09/24 13:56:01 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_mergeable(t_stack *b, const t_stack *a)
{
	t_bool	result;
	long	b_first;
	long	a_previous;
	long	a_first;

	result = false;
	a->list->max = ft_list_max(a->list);
	a->list->min = ft_list_min(a->list);
	if (!b->empty(b))
	{
		a_previous = a->list->first->previous->content;
		a_first = a->list->first->content;
		b_first = b->list->first->content;
		if (a_first == a->list->min)
			result = (b_first < a_first || b_first > a->list->max);
		else
			result = (b_first < a_first && b_first > a_previous);
	}
	return (result);
}

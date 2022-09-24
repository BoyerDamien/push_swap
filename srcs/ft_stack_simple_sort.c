/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_simple_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:06:32 by dboyer            #+#    #+#             */
/*   Updated: 2022/09/24 14:18:39 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_simple_sort(t_stack *a)
{
	t_element	*first;
	t_element	*next;
	t_element	*previous;

	first = a->list->first;
	next = first->next;
	previous = first->previous;
	if (first->content > next->content && first->content < previous->content)
		a->swap(a);
	else if (first->content > next->content && \
				first->content > previous->content)
	{
		if (next->content > previous->content)
			a->swap(a);
		a->reverse_rotate(a);
	}
	else if (first->content < next->content && \
				first->content < previous->content)
	{
		a->swap(a);
		a->rotate(a);
	}
	else if (first->content < next->content && \
				first->content > previous->content)
		a->reverse_rotate(a);
}

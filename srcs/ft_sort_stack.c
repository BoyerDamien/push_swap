/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:19 by dboyer            #+#    #+#             */
/*   Updated: 2022/08/06 15:35:58 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static void	radix_sort(t_stack *a, t_stack *b)
{
	int			size;
	int			i;
	int			j;
	long int	num;

	i = 0;
	size = a->list->size;
	while (!a->is_sorted(a) || a->list->size == 1)
	{
		j = 0;
		while (j < size)
		{
			num = a->list->first->content ^ INT_MIN;
			if ((num >> i) & 1)
				a->rotate(a);
			else
				a->push_to(a, b);
			j++;
		}
		while (!b->empty(b))
			b->push_to(b, a);
		i++;
	}
}

static t_bool	can_reverse_rotate(t_stack *a, t_stack *b)
{
	t_element	*first;
	t_element	*previous;

	first = a->list->first;
	previous = first->previous;
	return ((previous->content > first->content
			&& previous->content != a->list->max
			&& first->content != a->list->min)
		|| (first->content == a->list->max && previous->content == a->list->min
			&& a->list->size > 3) || (first->content == a->list->min
			&& previous->content != a->list->max) || (b->list->size > 0
			&& b->list->first->content < first->content));
}

static void	sort(t_stack *a, t_stack *b)
{
	// a->show(a);
	// b->show(b);
	if (b->is_mergeable(b, a))
	{
		b->push_to(b, a);
		sort(a, b);
	}
	else if (!ft_is_sorted(a))
	{
		if (a->is_swappable(a))
			a->swap(a);
		else if (a->is_pushable(a))
			a->push_to(a, b);
		else if (can_reverse_rotate(a, b))
			a->reverse_rotate(a);
		else
			a->rotate(a);
		sort(a, b);
	}
	else if (ft_is_sorted(a) && !b->is_mergeable(b, a) && !b->empty(b))
	{
		if (b->list->first->content > a->list->first->content
			&& a->list->first->content != a->list->min)
			a->rotate(a);
		else if (b->list->first->content < a->list->first->content
				&& a->list->first->content != a->list->max)
			a->reverse_rotate(a);
		else
			a->rotate(a);
		sort(a, b);
	}
}

t_error	*ft_sort_stack(t_stack *a, t_stack *b)
{
	if (a == NULL)
	{
		b->clear(b);
		free(b);
		return (ft_new_error("duplicate number"));
	}
	if (!a->is_sorted(a) && a->list->size <= 1000)
		sort(a, b);
	else if (!a->is_sorted(a))
		radix_sort(a, b);
	ft_stack_repare(a);
	a->clear(a);
	b->clear(b);
	free(a);
	free(b);
	return (NULL);
}

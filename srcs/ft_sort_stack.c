/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:19 by dboyer            #+#    #+#             */
/*   Updated: 2022/09/24 14:12:04 by dboyer           ###   ########.fr       */
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

static void	merge_b_stack(t_stack *a, t_stack *b)
{
	if (ft_stack_is_mergeable(b, a))
		b->push_to(b, a);
	else if (b->list->first->content > a->list->first->content)
		a->rotate(a);
	else if (b->list->first->content < a->list->first->content)
		a->reverse_rotate(a);
}

static void	sort(t_stack *a, t_stack *b)
{
	if (!ft_is_sorted(a) && b->empty(b) && a->list->size > 3)
	{
		while (a->list->size > 3 && !ft_is_sorted(a))
			a->push_to(a, b);
		sort(a, b);
	}
	else if (!ft_is_sorted(a) && a->list->size == 3)
	{
		ft_stack_simple_sort(a);
		sort(a, b);
	}
	else if (ft_is_sorted(a) && !b->empty(b))
	{
		merge_b_stack(a, b);
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
	if (!a->is_sorted(a) && a->list->size <= 10)
	{
		sort(a, b);
	}
	else if (!a->is_sorted(a))
		radix_sort(a, b);
	ft_stack_repare(a);
	a->clear(a);
	b->clear(b);
	free(a);
	free(b);
	return (NULL);
}

#include "push_swap.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

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
		else if (!a->is_swappable(a)
				&& a->list->first->content > a->list->first->next->content)
			a->push_to(a, b);
		else
			a->rotate(a);
		sort(a, b);
	}
	else if (ft_is_sorted(a) && !b->is_mergeable(b, a) && !b->empty(b))
	{
		a->reverse_rotate(a);
		sort(a, b);
	}
}

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

static void	short_sort(t_stack *a)
{
	if (!ft_is_sorted(a))
	{
		if (a->list->first->next->content < a->list->first->content)
			a->swap(a);
		else
			a->reverse_rotate(a);
		short_sort(a);
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
	if (!a->is_sorted(a) && a->list->size > 3)
		radix_sort(a, b);
	else if (!a->is_sorted && a->list->size > 3 && a->list->size <= 5)
		sort(a, b);
	else
		short_sort(a);
	a->clear(a);
	b->clear(b);
	free(a);
	free(b);
	return (NULL);
}

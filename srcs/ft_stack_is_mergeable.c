#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_mergeable(t_stack *b, t_stack *a)
{
	t_bool result;

	if (!b->empty(b))
	{
		if (b->list->first->content == a->max_value)
			result = a->list->first->content == a->min_value;
		else if (a->list->first->content != a->min_value)
			result = b->list->first->content < a->list->first->content;
		else
			result = b->list->first->content > a->list->first->content &&
				b->list->first->content > a->list->first->previous->content;
		return (result);
	}
	return (false);
}
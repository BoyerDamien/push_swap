#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_mergeable(t_stack *b, t_stack *a)
{
	t_bool result;

	if (!b->empty(b))
	{
		if (ft_atoi(a->list->first->content) != a->min_value)
			result = ft_less_than(b->list->first->content,
									a->list->first->content);
		else
			result = ft_greater_than(b->list->first->content,
										a->list->first->content) &&
				ft_greater_than(b->list->first->content,
								a->list->first->previous->content);
		return (result);
	}
	return (false);
}
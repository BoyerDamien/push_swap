#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_swappable(t_stack *self)
{
	t_bool first_greater;

	if (self->list->size > 2)
	{
		first_greater = self->list->first->content > self->list->first->next->content
			&& self->list->first->content < self->list->first->next->next->content;
		return (first_greater);
	}
	if (self->list->size == 2)
		return (self->list->first->content > self->list->first->next->content);
	return (false);
}
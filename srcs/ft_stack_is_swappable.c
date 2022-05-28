#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_swappable(t_stack *self)
{
	if (self->list->size > 2)
		return (self->list->first->content > self->list->first->next->content
			&& self->list->first->content < self->list->first->next->next->content
			&& self->list->first->content != self->max_value);
	if (self->list->size == 2)
		return (self->list->first->content > self->list->first->next->content
			&& self->list->first->content != self->max_value);
	return (false);
}
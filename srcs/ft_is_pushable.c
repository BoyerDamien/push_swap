#include "push_swap.h"

t_bool	ft_is_pushable(t_stack *self)
{
	t_bool result;

	result = false;

	if (self->list->first->content == self->min_value)
		result = false;
	else if (self->list->first->content == self->max_value)
		result = false;
	else
		result = self->list->first->content > self->list->first->next->content
			&& self->list->first->content > self->list->first->next->next->content
			&& self->list->size > 3;
	return (result);
}
#include "push_swap.h"

void	ft_stack_push(t_stack *self, long element)
{
	self->list->insert_before(self->list, self->list->first, element);
}

#include "push_swap.h"

void	ft_stack_clear(t_stack *self)
{
	self->list->clear(self->list);
	free(self->list);
}

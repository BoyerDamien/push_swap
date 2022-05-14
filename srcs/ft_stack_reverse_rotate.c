#include "push_swap.h"

void	ft_stack_reverse_rotate(t_stack *self)
{
	self->list->first = self->list->last(self->list);
	ft_putstr("rr");
	ft_putchar(self->stack_name);
	ft_putchar('\n');
}

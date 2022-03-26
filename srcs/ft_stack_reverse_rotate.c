#include "push_swap.h"

void ft_stack_reverse_rotate(t_stack *self) 
{
    if (self->list.size >= 2)
    {
        self->list.first = self->list.last;
        self->list.last = self->list.first->previous;
    }
}

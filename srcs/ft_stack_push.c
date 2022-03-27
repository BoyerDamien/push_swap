#include "push_swap.h"

void ft_stack_push(t_stack *self, void *element)
{
    if (!self->empty(self))
        self->list.insert_before(&self->list, self->list.first, element);
    else
        self->list.append(&self->list, element);
}

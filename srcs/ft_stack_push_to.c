#include "ft_list.h"
#include "push_swap.h"


void ft_stack_push_to(t_stack *self, t_stack *other)
{
    if (!self->empty())
    {
        other->push(other, self->list.first->content);
        self->pop(self);
    }
}
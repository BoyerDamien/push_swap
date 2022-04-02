
#include "ft_list.h"
#include "push_swap.h"

void ft_stack_rotate(t_stack *self) 
{
    self->list.first = self->list.first->next;
}

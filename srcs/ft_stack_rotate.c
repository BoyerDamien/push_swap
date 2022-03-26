
#include "ft_list.h"
#include "push_swap.h"

void ft_stack_rotate(t_stack *self) {
   if (self->list.size >= 2)
   {
       self->list.last = self->list.first;
       self->list.first = self->list.last->next;
   }
}

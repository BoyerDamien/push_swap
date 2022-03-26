#include "push_swap.h"


void ft_stack_pop(t_stack *self) {
    self->list.remove(&self->list, self->list.first);
}

#include "push_swap.h"

void ft_stack_push(t_stack *self, void *element) {
    self->list.insert_before(&self->list, self->list.first, element);
    ft_putchar('s');
    ft_putchar(self->stack_name);
}

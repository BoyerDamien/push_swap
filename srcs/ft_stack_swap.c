#include "push_swap.h"

void ft_stack_swap(t_stack *self) {
    t_element *tmp;

    if (self->list.size >= 2) {
        tmp = self->list.first;
        self->list.first = self->list.first->next;
        self->list.first->next = tmp;
        ft_putchar('s');
        ft_putchar(self->stack_name);
        ft_putchar('\n');
    }
}

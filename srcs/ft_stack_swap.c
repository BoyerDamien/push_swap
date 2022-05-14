#include "ft_list.h"
#include "push_swap.h"
#include <stdlib.h>

void ft_stack_swap(t_stack *self)
{
    t_element *first;
    t_element *second;

    if (self->list.size >= 2)
    {
        first = self->pop(self);
        second = self->pop(self);

        if (first != NULL)
            self->push(self, first->content);
        if (second != NULL)
            self->push(self, second->content);
        free(first);
        free(second);
        ft_putchar('s');
        ft_putchar(self->stack_name);
        ft_putchar('\n');
    }
}

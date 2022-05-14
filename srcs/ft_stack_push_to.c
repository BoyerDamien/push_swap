#include "ft_list.h"
#include "push_swap.h"


void ft_stack_push_to(t_stack *self, t_stack *other)
{
    t_element *tmp;

    if (!self->empty(self))
    {
        tmp = self->pop(self);
        if (tmp && other)
        {
            other->push(other, tmp->content);
            free(tmp);
            ft_putchar('p');
            ft_putchar(other->stack_name);
            ft_putchar('\n');
        }
    }
}

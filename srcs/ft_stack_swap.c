#include "ft_list.h"
#include "push_swap.h"
#include <stdlib.h>

static void clean_element(t_element *element)
{
    if (element != NULL)
    {
        free(element->content);
        free(element);
    }
}
void ft_stack_swap(t_stack *self)
{
    t_element *first;
    t_element *second;

    if (self->list.size >= 2)
    {
        first = self->pop(self);
        second = self->pop(self);

        if (first != NULL)
            self->push(self, second->content);
        if (second != NULL)
            self->push(self, first->content);
        clean_element(second);
        clean_element(second);
    }
}

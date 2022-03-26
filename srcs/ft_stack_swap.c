#include "push_swap.h"

void ft_stack_swap(t_stack *self) {
    t_element *second;

    if (self->list.size >= 2)
    {
        second = self->list.first->next;
        second->previous = self->list.first->previous;
        second->next->previous = self->list.first;
        second->next = self->list.first;
        self->list.first->previous->next = second;
        self->list.first->previous = second;
        self->list.first = second;
    }
}

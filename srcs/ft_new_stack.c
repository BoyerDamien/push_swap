#include "push_swap.h"
#include <stdlib.h>

t_stack *ft_newstack(char stack_name) 
{
    t_stack *new;

    new = (t_stack*)malloc(sizeof(t_stack));
    if (!new)
        return NULL;
    new->stack_name = stack_name;
    new->list = ft_list();
    new->pop = ft_stack_pop;
    new->push = ft_stack_push;
    new->push_to = ft_stack_push_to;
    new->empty = ft_stack_isempty;
    new->reverse_rotate = ft_stack_reverse_rotate;
    new->rotate = ft_stack_rotate;
    new->clear = ft_stack_clear;
    new->show = ft_stack_show;
    new->is_sorted = ft_is_sorted;
    new->is_swappable = ft_stack_is_swappable;
    return new;
}

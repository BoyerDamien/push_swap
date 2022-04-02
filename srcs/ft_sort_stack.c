#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>


static void sort(t_stack *a, t_stack *b)
{
    a->show(a);
    b->show(b);

    if (b->is_mergeable(b, a))
    {
        b->push_to(b, a);
        sort(a, b);
    }
    else if (!ft_is_sorted(a))
    {
        if (a->is_swappable(a))
            a->swap(a);
        else if (!a->is_swappable(a) && ft_greater_than(a->list.first->content, a->list.first->next->content) && ft_atoi(a->list.first->next->content) != a->min_value)
            a->push_to(a, b);
        else 
            a->rotate(a);
        sort(a, b);
    }
    else if (ft_is_sorted(a) && !b->is_mergeable(b, a) && !b->empty(b))
    {
        a->reverse_rotate(a);
        sort(a, b);
    }
}


t_error *ft_sort_stack(t_stack *a, t_stack *b)
{
    if (!a->is_sorted(a))
        sort(a, b);
    a->show(a);
    b->show(b);
    a->clear(a);
    b->clear(b);
    free(a);
    free(b);
    return NULL;
}

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>


static void sort(t_stack *a, t_stack *b)
{
    a->show(a);
    b->show(b);
    // if (!ft_is_sorted(a))
    // {
    //     if (a->is_swappable(a))
    //         a->swap(a);
    //     else
    //         a->push_to(a, b);
    //     sort(a, b);
    // }
}


t_error *ft_sort_stack(t_stack *a, t_stack *b)
{
    if (!a->is_sorted(a))
        sort(a, b);
    // if (b.empty(&b))
    // {
    //     a.push_to(&a, &b);
    // }
    // a.show(&a);
    // b.show(&b);
    a->clear(a);
    b->clear(b);
    free(a);
    free(b);
    return NULL;
}

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static void radix_sort(t_stack *a, t_stack *b)
{
    int size;
    int i; 
    int j;

    i = 0;
    size = a->list.size;
    while (!a->is_sorted(a) || a->list.size == 1) {
        j = 0;
        while (j < size) {
            long int num = ft_atoi(a->list.first->content) ^ INT_MIN;
            if ((num>>i)&1)
                a->rotate(a);
            else
                a->push_to(a, b);
            j++;
        }
        while (!b->empty(b))
                b->push_to(b, a);
        i++;
    }
}


t_error *ft_sort_stack(t_stack *a, t_stack *b)
{
    if (!a->is_sorted(a))
        radix_sort(a, b);
    a->show(a);
    b->show(b);
    a->clear(a);
    b->clear(b);
    free(a);
    free(b);
    return NULL;
}

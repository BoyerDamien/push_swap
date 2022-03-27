#include "push_swap.h"
#include <stdio.h>

t_error *ft_sort_stack(t_stack a, t_stack b)
{
    if (a.is_sorted(&a))
    {
        printf("is sorted");
    }
    // if (b.empty(&b))
    // {
    //     a.push_to(&a, &b);
    // }
    a.show(&a);
    b.show(&b);
    a.clear(&a);
    b.clear(&b);
    return NULL;
}

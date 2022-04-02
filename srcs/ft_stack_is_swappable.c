#include "push_swap.h"
#include <stdio.h>


t_bool ft_stack_is_swappable(t_stack *self) 
{
    t_bool first_greater;

    if (self->list.size > 2)
    {
        first_greater = ft_greater_than(self->list.first->content, self->list.first->next->content) && ft_less_than(self->list.first->content, self->list.first->next->next->content);
        printf(
                "Is swappable %d\n", first_greater
              );
        return first_greater; 
    }
    if (self->list.size == 2)
        return ft_greater_than(self->list.first->content, self->list.first->next->content);
    return false;
}

#include "push_swap.h"


t_bool ft_stack_is_swappable(t_stack *self) 
{
    t_bool first_greater;

    if (!self->empty(self))
    {
        first_greater = ft_greater_than(self->list.first->content, self->list.first->next->content);
        return first_greater;
    }
    return false;
}

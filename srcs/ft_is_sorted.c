#include "ft_list.h"
#include "push_swap.h"

static int is_sorted(t_element *element)
{
    return ft_atoi(element->previous->content) <= ft_atoi(element->content);
}

t_bool ft_is_sorted(t_stack *self)
{
    if (self->list.size >= 2)
        return ft_list_iter_ret(self->list.first->next, is_sorted);
    return true;
}

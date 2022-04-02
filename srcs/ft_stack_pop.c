#include "ft_list.h"
#include "push_swap.h"


t_element *ft_stack_pop(t_stack *self)
{
    t_element *result;
    
    if (!self->empty(self))
    {
        result = ft_new_element(self->list.first->content);
        self->list.remove(&self->list, self->list.first);
        return result;
    }
    return NULL;
}

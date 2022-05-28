#include "ft_list.h"
#include "push_swap.h"
#include <stdio.h>

static int	is_sorted(t_element *element)
{
	return (ft_less_than(element->content, element->next->content));
}

t_bool	ft_is_sorted(t_stack *self)
{
	if (self->list->size >= 2)
		return (self->list->iter_with_ret(self->list, is_sorted));
	return (true);
}

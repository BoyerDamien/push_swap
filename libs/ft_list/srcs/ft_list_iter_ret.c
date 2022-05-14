#include "ft_list.h"

int	ft_list_iter_ret(t_list *self, int (*f)(t_element *element))
{
	t_element	*element;

	element = self->first;
	while (element && element->next != self->first)
	{
		if (f(element) < 1)
			return (0);
		element = element->next;
	}
	return (1);
}

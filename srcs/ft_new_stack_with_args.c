#include "push_swap.h"
#include <stdio.h>

int	is_equal(t_element *element, long to_find)
{
	return ((element->content == to_find));
}

t_stack	*ft_new_stack_with_args(char stack_name, int argc, char **argv)
{
	t_stack	*new;

	new = ft_new_stack(stack_name);
	if (!new)
		return (new);
	while (--argc >= 1)
	{
		if (new->list->search(new->list, ft_atoi(argv[argc]), is_equal) != NULL)
		{
			new->clear(new);
			free(new);
			return (NULL);
		}
		new->push(new, ft_atoi(argv[argc]));
	}
	new->min_value = ft_stack_min(new);
	new->max_value = ft_stack_max(new);
	return (new);
}

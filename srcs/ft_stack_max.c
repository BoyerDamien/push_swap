#include "ft_list.h"
#include "push_swap.h"

long int	ft_stack_max(t_stack *stack)
{
	long int max;
	int i;
	t_element *element;

	i = 0;
	element = stack->list->first;
	max = ft_atoi(element->content);
	if (!stack->empty(stack))
	{
		while (i < stack->list->size)
		{
			if (ft_atoi(element->content) > max)
				max = ft_atoi(element->content);
			element = element->next;
			i++;
		}
	}
	return (max);
}

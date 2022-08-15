#include "push_swap.h"

t_bool	ft_is_swappable(t_list *list, t_element *element)
{
	t_bool result;
	int first;
	int next;
	int next_next;

	first = element->content;
	next = element->next->content;
	next_next = element->next->next->content;
	result = first > next;
	if (list->size > 2)
	{
		result = result && first < next_next;
		result = result || (first == list->min && next == list->max);
		result = result || (first == list->max
				&& list->first->previous->content == list->min);
	}
	return (result);
}

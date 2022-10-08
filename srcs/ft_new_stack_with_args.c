/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_stack_with_args.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:04 by dboyer            #+#    #+#             */
/*   Updated: 2022/10/08 14:52:12 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"
#include <stdio.h>

int	is_equal(t_element *element, long to_find)
{
	return ((element->content == to_find));
}

t_stack	*ft_new_stack_with_args(char stack_name, int argc, char **argv)
{
	t_stack		*new;
	t_element	tmp;

	tmp.next = NULL;
	tmp.previous = NULL;
	tmp.label = 0;
	new = ft_new_stack(stack_name);
	if (!new)
		return (new);
	while (--argc)
	{
		if (new->list->size && \
			new->list->search(new->list, ft_atoi(argv[argc]), is_equal) != NULL)
		{
			new->clear(new);
			free(new);
			return (NULL);
		}
		tmp.content = ft_atoi(argv[argc]);
		new->push(new, &tmp);
	}
	new->list->min = ft_list_min(new->list);
	new->list->max = ft_list_max(new->list);
	new->list = new->list->set_labels(new->list);
	return (new);
}

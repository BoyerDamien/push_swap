/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_stack_with_args.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:04 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/18 13:46:28 by dboyer           ###   ########.fr       */
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
	t_stack	*new;

	new = ft_new_stack(stack_name);
	if (!new)
		return (new);
	while (--argc)
	{
		if (new->list->search(new->list, ft_atoi(argv[argc]), is_equal) != NULL)
		{
			new->clear(new);
			free(new);
			return (NULL);
		}
		new->push(new, ft_atoi(argv[argc]));
	}
	new->list->min = ft_list_min(new->list);
	new->list->max = ft_list_max(new->list);
	return (new);
}

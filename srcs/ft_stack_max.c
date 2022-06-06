/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:30 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:08 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"

long int	ft_stack_max(t_stack *stack)
{
	long int	max;
	int			i;
	t_element	*element;

	i = 0;
	element = stack->list->first;
	max = element->content;
	if (!stack->empty(stack))
	{
		while (i < stack->list->size)
		{
			if (element->content > max)
				max = element->content;
			element = element->next;
			i++;
		}
	}
	return (max);
}

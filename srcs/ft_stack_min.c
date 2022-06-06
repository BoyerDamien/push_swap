/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:33 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:26:09 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"

long int	ft_stack_min(t_stack *stack)
{
	long int	min;
	int			i;
	t_element	*element;

	i = 0;
	element = stack->list->first;
	min = element->content;
	if (!stack->empty(stack))
	{
		while (i < stack->list->size)
		{
			if (element->content < min)
				min = element->content;
			element = element->next;
			i++;
		}
	}
	return (min);
}

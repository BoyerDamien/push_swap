/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:33 by dboyer            #+#    #+#             */
/*   Updated: 2022/10/08 14:41:31 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

long int	ft_list_min(t_list *self)
{
	long int	min;
	int			i;
	t_element	*element;

	i = 0;
	min = 0;
	if (self && self->size > 0)
	{
		element = self->first;
		min = element->content;
		while (i < self->size)
		{
			if (element->content < min)
				min = element->content;
			element = element->next;
			i++;
		}
	}
	return (min);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:30 by dboyer            #+#    #+#             */
/*   Updated: 2022/10/08 14:42:33 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

long int	ft_list_max(t_list *self)
{
	long int	max;
	int			i;
	t_element	*element;

	i = 0;
	max = 0;
	if (self && self->size > 0)
	{
		element = self->first;
		max = element->content;
		while (i < self->size)
		{
			if (element->content > max)
				max = element->content;
			element = element->next;
			i++;
		}
	}
	return (max);
}

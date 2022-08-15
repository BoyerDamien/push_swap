/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:20:05 by dboyer            #+#    #+#             */
/*   Updated: 2022/08/06 15:45:36 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_get_index_reverse(t_list *self, long int value)
{
	t_element *element;
	int i;

	i = 0;
	element = self->first;
	while (element && i < self->size)
	{
		if (element->content == value)
			return (i);
		element = element->previous;
		i++;
	}
	return (i);
}
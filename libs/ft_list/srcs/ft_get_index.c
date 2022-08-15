/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 14:08:41 by dboyer            #+#    #+#             */
/*   Updated: 2022/08/15 14:40:05 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_get_index(t_list *self, long int value)
{
	t_element	*element;
	int			i;

	i = 0;
	element = self->first;
	while (element && i < self->size)
	{
		if (element->content == value)
			return (i);
		element = element->next;
		i++;
	}
	return (i);
}

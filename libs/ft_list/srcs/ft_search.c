/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:45:45 by dboyer            #+#    #+#             */
/*   Updated: 2022/10/08 14:43:39 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_element	*ft_search(t_list *self, long content, int (*f)(t_element *element,
			long content))
{
	t_element	*element;
	int			i;

	i = 0;
	if (self)
	{
		element = self->first;
		while (element && i < self->size)
		{
			if (f(element, content))
				return (element);
			element = element->next;
			i++;
		}
	}
	return (NULL);
}

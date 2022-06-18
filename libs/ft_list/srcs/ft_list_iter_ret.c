/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_iter_ret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:46:54 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/18 13:54:33 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_iter_ret(t_list *self, int (*f)(t_list *self, t_element *element))
{
	t_element	*element;

	element = self->first;
	while (element && element->next != self->first)
	{
		if (f(self, element) < 1)
			return (0);
		element = element->next;
	}
	return (1);
}

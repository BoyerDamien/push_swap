/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_before.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:29:19 by dboyer            #+#    #+#             */
/*   Updated: 2022/05/14 19:01:32 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_insert_before(t_list *list, t_element *element, void *content)
{
	t_element	*new_elem;

	new_elem = ft_new_element(content);
	if (list->size)
	{
		new_elem->previous = element->previous;
		new_elem->next = element;
		element->previous->next = new_elem;
		element->previous = new_elem;
		if (element == list->first)
			list->first = new_elem;
	}
	else
	{
		new_elem->next = new_elem;
		new_elem->previous = new_elem;
		list->first = new_elem;
	}
	list->size++;
}

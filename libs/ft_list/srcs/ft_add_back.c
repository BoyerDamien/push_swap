/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:27:04 by dboyer            #+#    #+#             */
/*   Updated: 2022/05/28 14:13:39 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_add_back(t_list *list, long content, long label)
{
	t_element	*new_elem;

	new_elem = ft_new_element(content, label);
	if (list->size > 0)
	{
		new_elem->previous = list->last(list);
		new_elem->next = list->first;
		list->last(list)->next = new_elem;
		list->first->previous = new_elem;
		list->size++;
	}
	else
	{
		list->size = 1;
		new_elem->next = new_elem;
		new_elem->previous = new_elem;
		list->first = new_elem;
	}
}

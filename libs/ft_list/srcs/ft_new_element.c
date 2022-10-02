/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:17:22 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 14:47:48 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_element	*ft_new_element(long content, long label)
{
	t_element	*new;

	new = (t_element *)malloc(sizeof(t_element));
	if (!new)
		return (NULL);
	new->content = content;
	new->previous = NULL;
	new->next = NULL;
	new->label = label;
	return (new);
}

t_element *ft_new_element_from_element(t_element *element)
{
	return ft_new_element(element->content, element->label);
}


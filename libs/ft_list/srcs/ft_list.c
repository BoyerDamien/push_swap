/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:30:29 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/18 14:12:02 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list(void)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->min = 0;
	new->max = 0;
	new->size = 0;
	new->append = ft_add_back;
	new->clear = ft_clear;
	new->concat = ft_concat;
	new->remove = ft_del;
	new->iter = ft_list_iter;
	new->copy = ft_list_copy;
	new->search = ft_search;
	new->insert_before = ft_insert_before;
	new->iter_with_ret = ft_list_iter_ret;
	new->last = ft_list_get_last;
	new->index_of = ft_get_index;
	return (new);
}

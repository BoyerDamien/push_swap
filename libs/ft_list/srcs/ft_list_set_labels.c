/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_set_labels.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:12:42 by dboyer            #+#    #+#             */
/*   Updated: 2022/10/08 14:29:02 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

static void	ft_swap(t_element ***element1, t_element ***element2)
{
	t_element	**tmp;

	tmp = *element1;
	*element1 = *element2;
	*element2 = tmp;
}

static t_element	***init_array(t_list *self)
{
	t_element	***elem_array;
	t_element	**elem;
	int			i;

	i = 0;
	elem_array = malloc(self->size * sizeof(t_element *));
	if (elem_array == NULL)
		return (NULL);
	elem = &self->first;
	while (i < self->size)
	{
		elem_array[i] = elem;
		elem = &(*elem)->next;
		i++;
	}
	return (elem_array);
}

static void	presort(t_list *self, t_element ***elem_array)
{
	int			i;
	int			j;

	i = 0;
	while (i < self->size)
	{
		j = i;
		while (j < self->size)
		{
			if ((*elem_array[j])->content < (*elem_array[i])->content)
				ft_swap(&elem_array[i], &elem_array[j]);
			j++;
		}
		i++;
	}
}

t_list	*ft_list_set_labels(t_list *self)
{
	t_element	***elem_array;
	int			i;

	i = 0;
	elem_array = init_array(self);
	if (elem_array == NULL)
		return (NULL);
	presort(self, elem_array);
	while (i < self->size)
	{
		(*elem_array[i])->label = i;
		i++;
	}
	free(elem_array);
	return (self);
}

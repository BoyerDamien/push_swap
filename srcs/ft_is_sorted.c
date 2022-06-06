/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:22:52 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:25:41 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"
#include <stdio.h>

static int	is_sorted(t_element *element)
{
	return (element->content < element->next->content);
}

t_bool	ft_is_sorted(t_stack *self)
{
	if (self->list->size >= 2)
		return (self->list->iter_with_ret(self->list, is_sorted));
	return (true);
}

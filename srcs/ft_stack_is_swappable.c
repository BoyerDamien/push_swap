/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_swappable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:25 by dboyer            #+#    #+#             */
/*   Updated: 2022/07/14 19:42:05 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "push_swap.h"
#include <stdio.h>

t_bool	ft_stack_is_swappable(t_stack *self)
{
	return (ft_is_swappable(self->list, self->list->first));
}

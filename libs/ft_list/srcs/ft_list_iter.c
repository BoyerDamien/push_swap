/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_iter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:43:53 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 16:12:23 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_iter(t_list *self, void (*f)(t_element *element))
{
    t_element *element;

    element = self->first;
    while (element && element->next != self->first)
    {
		f(element);
        element = element->next;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:58:08 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/14 10:26:24 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void				ft_del(t_list *list, t_element *element)
{
    if (element)
    {
        if (list->size > 1)
        {
            element->previous->next = element->next;
            element->next->previous = element->previous;
            if (element == list->first)
                list->first = element->next;
        }
        free(element);
        list->size--;
    }
}

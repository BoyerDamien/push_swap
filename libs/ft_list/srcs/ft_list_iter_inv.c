/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_iter_inv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:18:03 by dboyer            #+#    #+#             */
/*   Updated: 2022/05/14 18:04:42 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_iter_inv(t_element *element, void (*f)(t_element *element))
{
	if (element)
	{
		f(element);
		ft_list_iter(element->previous, f);
	}
}

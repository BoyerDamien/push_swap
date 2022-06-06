/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:02 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:25:51 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_error	*ft_new_error(char *message)
{
	t_error	*error;

	error = (t_error *)malloc(sizeof(t_error));
	if (error == NULL)
		return (error);
	error->message = message;
	error->show = ft_error_show;
	return (error);
}

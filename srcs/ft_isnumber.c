/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:22:56 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:25:46 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stddef.h>

t_bool	ft_isnumber(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	if (str && *str == '-' && len == 1)
		return (false);
	if (str && *str == '-')
		str++;
	while (str && *str)
	{
		if (!ft_isdigit(*str))
			return (false);
		str++;
	}
	return (true);
}

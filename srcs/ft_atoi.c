/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:22:41 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:30:56 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(char *str)
{
	int			i;
	long int	result;

	if (str != NULL)
	{
		result = 0;
		while (ft_isspace(*str))
			str++;
		i = (str[0] == '-' || str[0] == '+');
		while (str[i] && ft_isdigit(str[i]) != 0)
			result = result * 10 + (str[i++] - '0');
		if (str[0] == '-')
			return (result * -1);
		return (result);
	}
	return (0);
}

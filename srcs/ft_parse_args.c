/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:23:11 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:25:58 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_error	*ft_check_args(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (!ft_isnumber(argv[i]))
				return (ft_new_error("some arguments aren't integers"));
			i++;
		}
		return (NULL);
	}
	return (ft_new_error("not enough arguments"));
}

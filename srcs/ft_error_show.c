/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_show.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:22:43 by dboyer            #+#    #+#             */
/*   Updated: 2022/06/06 10:31:56 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_show(t_error *error)
{
	int ret	__attribute__((unused));

	if (error)
	{
		ret = write(STDERR_FILENO, "Error: ", 7 * sizeof(char));
		while (error->message && *error->message)
		{
			ret = write(STDERR_FILENO, error->message, sizeof(char));
			error->message++;
		}
		ret = write(STDERR_FILENO, "\n", sizeof(char));
	}
}

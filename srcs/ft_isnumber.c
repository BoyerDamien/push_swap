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

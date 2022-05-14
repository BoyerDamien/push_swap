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

#include "push_swap.h"

void	ft_error_show(t_error *error)
{
	int ret __attribute__((unused));
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

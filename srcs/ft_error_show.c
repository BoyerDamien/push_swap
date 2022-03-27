#include "push_swap.h"


void ft_error_show(t_error *error)
{
    if (error)
    {
        write(STDERR_FILENO, "Error: ", 7 * sizeof(char));
        while (error->message && *error->message)
        {
            write(STDERR_FILENO, error->message, sizeof(char));
            error->message++;
        }
        write(STDERR_FILENO, "\n", sizeof(char));
    }
}

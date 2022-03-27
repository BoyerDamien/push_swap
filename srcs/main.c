#include "push_swap.h"

int main(int argc, char **argv)
{
    t_error *error;

    if (argc > 1) 
    {
        error = ft_check_args(argc, argv);
        if (error)
        {
            error->show(error);
            free(error);
            return 1;
        }
        error = ft_sort_stack(ft_new_stack('a'), ft_new_stack('b'));
    }
    return 0;
}

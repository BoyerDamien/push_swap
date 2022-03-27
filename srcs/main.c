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
        error = ft_sort_stack(ft_new_stack_with_args('a', argc, argv), ft_new_stack('b'));
        if (error)
        {
            error->show(error);
            free(error);
            return 1;
        }
    }
    return 0;
}

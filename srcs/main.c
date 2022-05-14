#include "push_swap.h"
#include <stdlib.h>
#include <limits.h>


static t_error *ft_check_max_min_int(int argc, char **argv) {
    while (--argc) {
        if (ft_atoi(argv[argc]) > INT_MAX)
            return ft_new_error("a number is greater than INT_MAX");
        if (ft_atoi(argv[argc]) < INT_MIN)
            return ft_new_error("a number is less than INT_MIN");
    }
    return NULL;
}

static void ft_check_error(t_error *error) {
    if (error)
        {
            error->show(error);
            free(error);
            exit(EXIT_FAILURE);
        }
}

int main(int argc, char **argv)
{
    if (argc > 1) 
    {
        ft_check_error(ft_check_args(argc, argv));
        ft_check_error(ft_check_max_min_int(argc, argv));

        ft_check_error(ft_sort_stack(
                    ft_new_stack_with_args('a', argc, argv),
                    ft_new_stack('b')
                ));
    }
    return 0;
}

#include "push_swap.h"
#include <stdlib.h>


t_stack ft_new_stack_with_args(char stack_name, int argc, char **argv)
{
    t_stack new;

    new = ft_new_stack(stack_name);
    while (--argc >= 1)
        new.push(&new, argv[argc]);
    return new;
}

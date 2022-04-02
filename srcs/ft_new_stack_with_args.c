#include "push_swap.h"

t_stack *ft_new_stack_with_args(char stack_name, int argc, char **argv)
{
    t_stack *new;
    
    new = ft_new_stack(stack_name);
    if (!new)
        return new;
    while (--argc >= 1)
        new->push(new, argv[argc]);
    return new;
}

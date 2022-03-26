#include "push_swap.h"

t_stack ft_new_stack(char stack_name) {
    t_stack new;
    
    new.stack_name = stack_name;
    new.list = ft_list();
    new.pop = ft_stack_pop;
    new.push = ft_stack_push;
    return new;
}

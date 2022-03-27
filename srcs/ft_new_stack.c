#include "push_swap.h"

t_stack ft_new_stack(char stack_name) {
    t_stack new;
    
    new.stack_name = stack_name;
    new.list = ft_list();
    new.pop = ft_stack_pop;
    new.push = ft_stack_push;
    new.push_to = ft_stack_push_to;
    new.empty = ft_stack_isempty;
    new.reverse_rotate = ft_stack_reverse_rotate;
    new.rotate = ft_stack_rotate;
    new.clear = ft_stack_clear;
    new.show = ft_stack_show;
    return new;
}

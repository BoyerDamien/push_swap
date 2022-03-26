#include "push_swap.h"

t_stack ft_new_stack() {
    t_stack new;

    new.list = ft_list();
    return new;
}

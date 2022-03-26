#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "ft_list.h"

typedef struct s_stack{
    t_list list;
} t_stack;


// Functions
t_stack ft_new_stack();

void stack_push(t_stack *self, void *element) {
    self->list.insert_before(&self->list, self->list.first, element);
}

#endif

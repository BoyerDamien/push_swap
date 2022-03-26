#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "ft_list.h"
#include <unistd.h>

// Stack object
typedef struct s_stack
{
    t_list list;
    char stack_name;

    void (*push)(struct s_stack*, void *);
    void (*pop)(struct s_stack*);
} t_stack;


// Stack constructor
t_stack ft_new_stack(char);

// Stack method
void ft_stack_push(t_stack *self, void *element);
void ft_stack_pop(t_stack *self);
void ft_stack_swap(t_stack *self);

void ft_putchar(char c);
void ft_putstr(char *str);


#endif

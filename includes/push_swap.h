#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "ft_list.h"
#include <stddef.h>
#include <unistd.h>

typedef enum e_bool 
{
    false,
    true,
} t_bool;


typedef struct s_error
{
    char *message;
    void (*show)();
} t_error;

// Error constructor
t_error *ft_new_error(char *message);

// Error methods
void ft_error_show(t_error *error);


// Stack object
typedef struct s_stack
{
    t_list *list;
    char stack_name;

    void (*push)(struct s_stack*, void *);
    t_element *(*pop)(struct s_stack*);
    void (*swap)(struct s_stack*);
    void (*rotate)(struct s_stack*);
    void (*reverse_rotate)(struct s_stack*);
    void (*push_to)(struct s_stack*, struct s_stack*);
    void (*clear)(struct s_stack*);
    void (*show)(struct s_stack*);
    t_bool (*empty)(struct s_stack*);
    t_bool(*is_sorted)(struct s_stack*);
    t_bool(*is_swappable)(struct s_stack *);
    t_bool (*is_mergeable)(struct s_stack *, struct s_stack *);
} t_stack;


// Stack constructors
t_stack *ft_new_stack(char stack_name);
t_stack *ft_new_stack_with_args(char stack_name, int argc, char **argv);

// Stack method
t_element *ft_stack_pop(t_stack *self);
void ft_stack_push(t_stack *self, void *element);
void ft_stack_swap(t_stack *self);
void ft_stack_rotate(t_stack *self);
void ft_stack_reverse_rotate(t_stack *self);
void ft_stack_push_to(t_stack *self, t_stack *other);
void ft_stack_show(t_stack *self);
void ft_stack_clear(t_stack *self);
t_bool ft_stack_isempty(t_stack *self);
t_bool ft_is_sorted(t_stack *self);

// Utils
void ft_putchar(char c);
void ft_putstr(char *str);
t_bool ft_less_than(char *n1, char *n2);
t_bool ft_greater_than(char *n1, char *n2);

long int ft_atoi(char *str);

t_bool ft_isspace(char c);
t_bool ft_isdigit(char c);
t_bool ft_isnumber(char *str);
void ft_putnbr(long int nb);
size_t ft_strlen(char *str);

t_error *ft_check_args(int argc, char **argv);

t_error *ft_sort_stack(t_stack *a, t_stack *b);

#endif

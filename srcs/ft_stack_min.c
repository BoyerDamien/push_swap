#include "ft_list.h"
#include "push_swap.h"


long int ft_stack_min(t_stack *stack) 
{
    long int min;
    int i;
    t_element *element;

    i = 0;
    element = stack->list.first;
    min = ft_atoi(element->content);
    if (!stack->empty(stack))
    {
        while (i < stack->list.size)
        {

            printf("min = %ld\n", min);
            if (ft_atoi(element->content) < min)
                min = ft_atoi(element->content);
            element = element->next;
            i++;
        }   
    }
    printf("min = %ld\n", min);
    return min;
}

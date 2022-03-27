#include "ft_list.h"

int ft_list_iter_ret(t_element *element, int (*f)(t_element *element))
{
	if (element)
    {
        if (f(element))
		    return ft_list_iter_ret(element->next, f);
        return 0;
    }
    return 1;
}

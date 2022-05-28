#include "ft_list.h"
#include "push_swap.h"

static void	print_one_element(t_element *element)
{
	if (element)
	{
		ft_putnbr(element->content);
		ft_putchar('\n');
	}
}

void	ft_stack_show(t_stack *self)
{
	if (!self->empty(self))
	{
		ft_putstr("Stack ");
		ft_putchar(self->stack_name);
		ft_putchar('\n');
		ft_putstr("------------------------------------------------\n");
		self->list->iter(self->list, print_one_element);
		ft_putchar('\n');
		ft_putstr("------------------------------------------------\n");
	}
}

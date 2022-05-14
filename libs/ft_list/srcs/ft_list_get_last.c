
#include "ft_list.h"

t_element	*ft_list_get_last(t_list *self)
{
	return (self->first->previous);
}

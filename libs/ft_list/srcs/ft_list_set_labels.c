#include "ft_list.h"
#include <stdio.h>


static void ft_swap(t_element ***element1, t_element ***element2)
{
	t_element **tmp;

	tmp = *element1;
	*element1 = *element2;
	*element2 = tmp;
}

t_list  *ft_list_set_labels(t_list *self) 
{
	t_element **elem;
	t_element ***elem_array;
	int i;
	int j;

	elem_array = (t_element***)malloc(self->size * sizeof(t_element *));
	if (elem_array == NULL)
		return (NULL);
	
	i = 0;
	elem = &self->first;
	while (i < self->size)
	{
		elem_array[i] = elem;
		elem = &(*elem)->next;
		i++;
	}

	i = 0;
	while (i < self->size)
	{
		j = i;
		while(j < self->size)
		{
			if ((*elem_array[j])->content < (*elem_array[i])->content){
				ft_swap(&elem_array[i], &elem_array[j]);
			}
			j++;
		}
		i++;
	}

	i = 0;
	while (i < self->size)
	{
		(*elem_array[i])->label = i;
		i++;
	}
	free(elem_array);
	return self;
}
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*cur;

	while(begin_list)
	{
		cur = begin_list;
		begin_list = begin_list->next;
		if (free_fct)
			free_fct(cur->data);
		free(cur);
	}
}

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void	*data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*cur;

	node = ft_create_elem(data);
	if (!node)
		return ;
	if (!node)
	{
		*begin_list = node;
		return ;
	}
	cur = *begin_list;
	while (cur->next)
		cur = cur->next;
	cur->next = node;
}

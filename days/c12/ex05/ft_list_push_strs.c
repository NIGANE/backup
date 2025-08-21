#include <stdlib.h>
#include "ft_list.h"

t_list  *ft_create_elem(char	*data);
void	ft_list_push_front(t_list **begin_list, char *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!new_node)
		return ;
	if (!*begin_list)
	{
		*begin_list = new_node;
		return;
	}
	new_node->next = *begin_list;
	*begin_list = new_node;
}

t_list	*ft_create_elem(char	*data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*cur;
	
	cur = NULL;
	i = 0;
	while (i < size)
		ft_list_push_front(&cur, strs[i++]);

	return (cur);
}

# include <stdlib.h>
# include "ft_list.h"

t_list  *ft_create_elem(void    *data)
{
        t_list	*node;

        node = malloc(sizeof(t_list));
        if (!node)
                return (NULL);
        node->data = data;
        node->next = NULL;
        return (node);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!new_node)
		return ;
	new_node->next = *begin_list;
	*begin_list = new_node;
}

#include "ft_list.h"

t_list	*ft_list_at(t_list *bg_list, unsigned int nbr)
{
	int	i;

	i = 0;
	while (bg_list && i++ < nbr)
		bg_list = bg_list->next;
	return (bg_list);
}

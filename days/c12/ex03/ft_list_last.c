#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *bg_list)
{
	if (!bg_list)
		return (NULL);
	while(bg_list->next)
		bg_list = bg_list->next;
	return (bg_list);
}

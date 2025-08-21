#include "ft_list.h"

void	ft_lsit_reverse(t_list **bg_list)
{
	t_list	*cur;
	t_list	*prev;
	t_list	*temp;

	cur = bg_list;
	prev = NULL;
	while (cur->next)
	{
		


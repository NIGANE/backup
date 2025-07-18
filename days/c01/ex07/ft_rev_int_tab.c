
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int le;
	
	le = *a;
	*a = *b;
	*b = le;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size /2)
	{
		ft_swap(&tab[i], &tab[size-1-i]);
		i++;
	}
		
}

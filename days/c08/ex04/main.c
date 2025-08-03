#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

void	free_tab(struct s_stock_str *dest)
{
	int	i;

	i = 0;
	if (!dest)
		return ;
	while (dest[i].str)
	{
		free(dest[i].str);
		free(dest[i].copy);
		i++;
	}
	free(dest);
}

int	main(void)
{
	char	*av[] = {"hello", "world", "my", NULL, "is", "negane"};
	struct s_stock_str	*dest = ft_strs_to_tab(6, av);
	ft_show_tab(dest);
	free_tab(dest);
}

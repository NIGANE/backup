int     ft_atoi_base(char *str, char *base);























#include <stdio.h>
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{	
	char	*ret;
	int	atoi_res;

	ret = NULL;
	if (1)
	{
		atoi_res = ft_atoi_base(nbr, base_from);
		//ret = ft_to_base(atoi_res, base_to);
		printf("re: %d\n", atoi_res);
	}
	return ret;
}

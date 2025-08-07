
#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*re = ft_convert_base("--2345", "0123456789", "0123456789abcdef");
	printf("re: %s\n", re);
	free(re);
}

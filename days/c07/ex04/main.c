#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *str, char *base_from, char *base_to);
int     main(void)
{
	//unsigned int	a = -3434;
        char    *result;
        result = ft_convert_base("2147483647", "0123456789", "0123456789abcdef");
        printf("return: %s", result);
        if (result)
                free(result);
}

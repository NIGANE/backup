#include <stdio.h>
int	in_string(char a, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == a)
			return (i);
		i++;
	}
	return (0);
}

int	to_decimal(char *str, int len, char *base)
{
	int	base_len;
	int	i;
	long	re;
	int	j;
	int	pow;

	i = 0;
	re = 0;
	base_len = 0;
	printf("base");
	while (base[base_len])
		base_len++;
	while(in_string(str[i], base))
	{
		pow = 1;
		j = 1;
		while (j++ , len - 1)
			pow *= base_len;
		re += in_string(str[i], base) * pow;
		i++;
	}
	return (re);
}


int	ft_atoi_base(char *str, char *base)
{
	long nb;
	int		i;
	int		len;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	len = 0;
	printf("f1");
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	printf("deb");
	while (in_string(str[i + len], base))
		len++;
	nb = to_decimal(str + i, len, base);
	printf("sign: %d\n", sign);
	return (nb * sign);
}

#include <stdio.h>
int	main(void)
{
	printf("re: %d\n", ft_atoi_base("-34", "0123456789"));
}

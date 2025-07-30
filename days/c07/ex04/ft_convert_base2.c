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

int     to_decimal(char *str, int len, char *base)
{
        int             i;
        long    re;
        int             base_len;
        int             pow;
        int             j;

        i = 0;
        re = 0;
        base_len = 0;
        while (base[base_len] != '\0')
                base_len++;
        while (in_string(str[i], base))
        {
                pow = 1;
                j = 1;
                while (j++ < len - i)
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
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (in_string(str[i + len], base))
		len++;
	nb = to_decimal(str + i, len, base);
	return (nb * sign);
}

int	main(void)
{
	printf

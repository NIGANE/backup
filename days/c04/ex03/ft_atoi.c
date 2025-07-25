

int	ft_atoi(char *str)
{
	int	re;
	int	sign;
	int	i;

	i = 0;
	re = 0;
	sign = 1;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		re = re*10 + str[i++] - '0';

	return re*sign;
}

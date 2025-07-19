

int	is_num(char le)
{
	if (le >= '0' && le <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char* str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_num(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

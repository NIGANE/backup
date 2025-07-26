int	is_prime(int nb)
{
	int	i;
	
	i = 2;
	while (i <= nb - 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	nb++;
	while (!is_prime(nb))
		nb++;
}

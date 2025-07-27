#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	j;
	int	k;

	j = 1;
	while (j < ac - 1)
	{
		k = j + 1;
		while (k <= ac - 1)
		{
			if (ft_strcmp(av[j], av[k]) > 0)
			{
				ft_swap(&av[j], &av[k]);
			}
			k++;
		}
		j++;
	}
	j = 1;
	while (j <= ac - 1)
		ft_putstr(av[j++]);
}

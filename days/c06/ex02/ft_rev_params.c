#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	j;

	j = ac - 1;
	while (j > 0)
		ft_putstr(av[j--]);
}

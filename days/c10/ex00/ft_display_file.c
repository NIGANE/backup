
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "help.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_putstr(ERR1);
	else if (ac > 2)
		ft_putstr(ERR2);
	else
	{
		int fd = open(av[1], O_RDONLY);
		printf("fd : %d\n", fd);
	}
}

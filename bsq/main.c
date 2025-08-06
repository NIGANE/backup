/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:21:10 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/06 17:57:26 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include "help.h"
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*read_line(int fd, char *dest)
{
	int		readed;
	char    bf[2];

	readed = read(fd, bf, 1);
	while (readed > 0 && bf[0] != '\n')
        {
                bf[readed] = '\0';
                ft_putstr(bf);
                ft_strlcat(dest, bf, MAX_SIZE);
                readed = read(fd, bf, 1);
        }
	return (dest);
}

void	read_file(int fd, char	*file_name)
{
	char	fn[MAX_SIZE];


	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return ;
	read_line(fd, fn);
	ft_putstr(dest);
	close(fd);
}

int	main(int ac, char **av)
{
	char    fn[MAX_SIZE];
	int             fd;
	char	*arr[10];

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return 1;
		read_fil(fd, arr);
	}
}

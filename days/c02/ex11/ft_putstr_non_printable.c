/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:56:43 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/21 12:36:45 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_hexa(char a)
{
	unsigned char	index;

	index = (unsigned) a;
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[index / 16]);
	ft_putchar("0123456789abcdef"[index % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
			print_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

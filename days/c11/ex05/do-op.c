/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:51:48 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/07 15:11:50 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_op(int a, int b, void (*f)(int, int))
{
	f(a, b);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	char	*op;

	if (ac == 4)
	{
		op = av[2];
		if (ft_strlen(op) == 1)
		{
			ft_putstr("entred\n");
			if (in_string(op[0], "*/+-%"))
			{
				a = ft_atoi(av[1]);
				b = ft_atoi(av[3]);
				ft_putnbr(a);
				ft_putchar('\n');
				ft_putnbr(b);
				ft_putchar('\n');
				if (av[2][0] == '+')
					print_op(a, b, &add);
				else if (av[2][0] == '-')
					print_op(a, b, &sub);
				else if (av[2][0] == '*')
					print_op(a, b, &multp);
				else if (av[2][0] == '/')
					print_op(a, b, &div);
				else if (av[2][0] == '%')
					print_op(a, b, &mod);
			}
			else
				ft_putnbr(0);
			ft_putchar('\n');
		}
	}
}

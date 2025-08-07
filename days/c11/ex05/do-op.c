/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:51:48 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/07 15:32:33 by amerkht          ###   ########.fr       */
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

void	check_holder(char *av1, char *av2, char op)
{
	int	a;
	int	b;

	if (in_string(op, "*/+-%"))
	{
		a = ft_atoi(av1);
		b = ft_atoi(av2);
		if (op == '+')
			print_op(a, b, &add);
		else if (op == '-')
			print_op(a, b, &sub);
		else if (op == '*')
			print_op(a, b, &multp);
		else if (op == '/')
			print_op(a, b, &div);
		else if (op == '%')
			print_op(a, b, &mod);
	}
	else
		ft_putnbr(0);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		check_holder(av[1], av[3], av[2][0]);
		ft_putchar('\n');
	}
}

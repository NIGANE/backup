/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:51:48 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/07 05:09:38 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_op(int a, int b, void (*f)(int, int))
{
	f(a, b);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac == 4)
	{
		if (in_string(av[2][0], "/+-*%"))
		{
			a = ft_atoi(av[1]);
			b = ft_atoi(av[3]);
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
	}
}

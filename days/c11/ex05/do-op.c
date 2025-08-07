/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:51:48 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/07 01:35:44 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

void	print_op(char *a, char *b, void (*f)(int, int))
{
	f(ft_atoi(a), ft_atoi(b));
}

int	main(int ac, char **av)
{

	char	*op = "+-/*%";
	if (ac == 4)
	{
		if (in_string(av[2], op))
		{
			if (av[2] == '+')
				print_op(av[1], av[3], &add);
		}
		else
			ft_putnbr(0);
	}
	
}

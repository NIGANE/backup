/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:06:20 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/16 18:41:30 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_combo(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_combo2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			print_combo(a, b);
	 		b++;
		}
	a++;
	}	
}

int	main()
{
	ft_print_combo2();
}

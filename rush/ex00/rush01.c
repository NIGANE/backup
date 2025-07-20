/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:06:53 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/20 13:06:59 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	header(int x, int y)
{
	int	j;

	if (y >= 1)
	{
		if (x > 0)
			ft_putchar('/');
		j = 1;
		while (j <= x - 2)
		{
			ft_putchar('*');
			j++;
		}
		if (x > 1)
			ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	footer(int x, int y)
{
	int	j;

	if (y >= 2)
	{
		if (x > 0)
			ft_putchar('\\');
		j = 1;
		while (j <= x - 2)
		{
			ft_putchar('*');
			j++;
		}
		if (x > 1)
			ft_putchar('/');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	m;
	int	j;

	header(x, y);
	if (y > 2)
	{
		m = 1;
		while (m <= y - 2)
		{
			if (x > 0)
				ft_putchar('*');
			j = 1;
			while (j <= x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			if (x > 1)
				ft_putchar('*');
			ft_putchar('\n');
			m++;
		}
	}
	footer(x, y);
}

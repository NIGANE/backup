/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:24:40 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/28 11:32:01 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int	is_safe(int q, int p, int *arr)
{
	int	i;

	i = 0;
	while (i < q)
	{
		if (arr[i] == p || ft_abs(i - q) == ft_abs(arr[i] - p))
			return (0);
		i++;
	}
	return (1);
}

void	print_result(int *arr, int n)
{
	int		i;
	char	holder;

	i = 0;
	while (i < n)
	{
		holder = arr[i] + '0';
		write(1, &holder, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	backtraking_solver(int q, int n, int *sol, int *arr)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (is_safe(q, i, arr))
		{
			arr[q] = i;
			if (q == n - 1)
			{
				print_result(arr, n);
				*sol += 1;
			}
			else
				backtraking_solver(q + 1, n, sol, arr);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	n;
	int	solutions;
	int	arr[10];

	solutions = 0;
	n = 10;
	backtraking_solver(0, n, &solutions, arr);
	return (solutions);
}

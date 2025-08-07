/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:32:31 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/07 00:49:19 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	are_same_sign(int a, int b)
{
	if ((a > 0 && b < 0) || (a < 0 && b > 0))
		return (0);
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	holder;

	i = 0;
	holder = f(tab[0], tab[1]);
	while (i < length - 1)
	{
		if (!are_same_sign(f(tab[i], tab[i + 1]), holder))
			return (0);
		i++;
	}
	return (1);
}

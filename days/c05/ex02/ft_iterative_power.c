/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:25:11 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/24 12:06:32 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	re;
	int	i;

	re = 1;
	i = 1;
	if (power < 0)
		return (0);
	while (i++ <= power)
		re = re * nb;
	return (re);
}

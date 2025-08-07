/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:51:48 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/07 01:21:51 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	add(int a, int b)
{
	ft_putnbr(a + b);
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
}

void	div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

void	multp(int a, int b)
{
	ft_putnbr(a * b);
}

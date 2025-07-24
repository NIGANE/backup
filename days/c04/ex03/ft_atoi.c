/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:05:38 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/24 14:58:58 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

int	is_valid(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			start = 1;
		if((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && start == 1)
			return (0);
		if(is_digit(str[i]))
			return (1);
		i++;
	}
	return (1);
}

int	ft_atoi(char	*str)
{
	int	i;
	int	sign;
	int	re;

	i = 0;
	sign = 1;
	re = 0;
	if(is_valid(str))
	{
		while (str[i] != '\0')
		{
			if (str[i] == '-')
				sign *= -1;
			else if (str[i] >= '0' && str[i] <= '9')
			{
				while (str[i] >= '0' && str[i] <= '9')
					re = (re * 10) + (str[i++] - '0');
				return (re * sign);
			}
			i++;
		}
	}
	return (0);
}

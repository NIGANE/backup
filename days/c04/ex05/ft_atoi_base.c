/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 07:32:23 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/23 13:00:17 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	is_valid(char	*base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if(i <= 1)
		return (0);
	return (1);
}

int	in_string(char a, char	*src)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i++] == a)
			return (1);
	}
	return 0;
}

int	ft_pow(int nb, int oss)
{
	int	i;
	int	re;

	i = 1;
	re = 1;
	while (i++ < oss)
	{
		re *= nb;
	}
	return re;
}

int	index_of(char a, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		if (src[i] == a)
			return i;
		i++;
	}
	return -1;
}

int	to_decimal(char *str, int len, char *base)
{
	int	i;
	int	re;
	int	base_len;

	i = 0;
	re = 0;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	while(i < len)
	{
		printf("%d(%d) :%d +",base_len, len - i - 1, ft_pow(base_len, len - i));
		re = (re + index_of(str[i], base) * ft_pow(base_len, len - i));
		i++;
	}
	return re;
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;

	sign = 1;
	i = 0;
	nb = 0;
	if (is_valid(base))
	{
		while (str[i] != '\0')
		{
			if (str[i] == '-')
				sign *= -1;
			else if (str[i] == ' ')
				sign = 1;
			else if (in_string(str[i], base))
			{
				while(in_string(str[i++], base))
					nb++;
				return (to_decimal(str + i, nb, base) * sign);
			}
			i++;
		}
	}
	return 0;
}
int	main(void)
{
	char	*base = "0123456789abcdef";
	char	*str = "a7fe";
	//ft_atoi_base(str, base);
	printf("string: %s\nbase: %s\nreturn: %d\n", str, base, ft_atoi_base(str, base));
}

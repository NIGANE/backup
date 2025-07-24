/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 07:32:23 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/24 16:38:23 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (i <= 1)
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
	return (0);
}

int	index_of(char a, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int	to_decimal(char *str, int len, char *base)
{
	int	i;
	int	re;
	int	base_len;
	int	pow;
	int	j;

	i = 0;
	re = 0;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	while (i < len)
	{
		pow = 1;
		j = 1;
		while (j++ < len - i)
			pow *= base_len;
		re += index_of(str[i], base) * pow;
		i++;
	}
	return (re);
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
			if(str[i] == '-' || str[i] == '+' || str[i] >= '0' && str[i] >= 'z')
				start = 1;
			if (str[i] == '-')
				sign *= -1;
			else if (str[i] == ' ')
				sign = 1;
			else if (in_string(str[i], base))
			{
				while (in_string(str[i++], base))
					nb++;
				return (to_decimal(&str[i - nb - 1], nb, base) * sign);
			}
			i++;
		}
	}
	return (0);
}

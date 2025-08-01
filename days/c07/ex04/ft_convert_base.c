/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:07:19 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/01 09:22:49 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_put(char *arr, char a)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	arr[i++] = a;
	arr[i] = '\0';
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = NULL;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
		i++;
	dest = (char *)malloc(i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_to_base(long long nbr, char *base, char *arr)
{
	int	base_len;

	if (nbr < 0)
	{
		ft_put(arr, '-');
		nbr *= -1;
	}
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
	{
		ft_to_base(nbr / base_len, base, arr);
	}
	ft_put(arr, base[nbr % base_len]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		str[40];
	long long	atoi_ret;

	str[0] = '\0';
	if (is_valid(base_to) && is_valid(base_from) && nbr)
	{
		atoi_ret = ft_atoi_base(nbr, base_from);
		ft_to_base(atoi_ret, base_to, str);
		return (ft_strdup(str));
	}
	else
		return (NULL);
}

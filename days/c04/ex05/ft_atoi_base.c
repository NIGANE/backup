/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:25:05 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/24 15:22:20 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     is_valid(char   *base)
{
        int     i;
        int     j;

        i = 0;
        while (base[i])
        {
                if (base[i] == '+' || base[i] == '-')
                        return (0);
                if(base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
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

int     in_string(char a, char  *src)
{
        int     i;

        i = 0;
        while (src[i] != '\0')
        {
                if (src[i++] == a)
                        return (1);
        }
        return (0);
}

int	index_of(char a, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == a)
			return i;
		i++;
	}
	return -1;
}

int     to_dicimal(char *str, int len, char *base)
{
        int	i;
        long	re;
        int	base_len;
        int	pow;
        int	j;

        i = 0;
        re = 0;
        base_len = 0;
        while (base[base_len] != '\0')
                base_len++;
        while (in_string(str[i], base))
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
	long	nb;
	int	i;
	int	len;
	int	sign;
	
	i = 0;
	nb = 0;
	sign = 1;
	len = 0;
	if (is_valid(base))
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		if (in_string(str[i], base))
		{
			while(in_string(str[i + len], base))
				len++;
			nb = to_dicimal(str + i, len, base);
		}
	}
	return (nb * sign);
}

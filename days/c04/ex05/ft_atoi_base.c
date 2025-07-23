/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 07:32:23 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/23 07:51:25 by amerkht          ###   ########.fr       */
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

int	main(void)
{
	char	*base = "0123456789abcdef";
	printf("in base : %d\n", in_string('a', base));
}

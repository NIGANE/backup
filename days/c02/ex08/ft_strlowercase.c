/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:07:53 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/19 12:10:48 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_upper(str[i]))
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

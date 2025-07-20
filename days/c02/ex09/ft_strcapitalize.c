/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouskar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:37:42 by agouskar          #+#    #+#             */
/*   Updated: 2025/07/20 21:28:15 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*to_lower(char	*str)
{
	int	i;

	i = 0;
	while (str[i] < '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	to_lower(str);
	x = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (x == 1)
			{
				str[i] = str[i] - 32;
				x = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			x = 0;
		else
			x = 1;
		i++;
	}
	return (str);
}

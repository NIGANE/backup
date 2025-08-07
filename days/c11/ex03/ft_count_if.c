/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:21:16 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/07 00:31:18 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;

	count = 0;
	while (length > 0)
	{
		if (f(tab[length - 1]))
			count++;
		length--;
	}
	return (count);
}

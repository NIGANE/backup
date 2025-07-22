/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:32:45 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/21 18:44:08 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	while (dest[i] != '\0')
		i++;
	while (*src && j <= nb)
	{
		dest[i] = *src;
		i++;
		src++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

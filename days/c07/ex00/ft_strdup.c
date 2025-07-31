/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:28:57 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/31 11:52:31 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		s_len;

	if (!src)
		return (NULL);
	s_len = 0;
	while (src[s_len])
		s_len++;
	dest = malloc(sizeof(char) * (s_len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

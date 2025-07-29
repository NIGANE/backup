/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:19:49 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/29 18:09:53 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	arr_str_len(char **arr, int size)
{
	int	i;
	int	total_size;

	i = 0;
	total_size = 0;
	while (i < size)
		total_size += ft_strlen(arr[i++]);
	return (total_size);
}

char	*allcate_str(int size)
{
	char	*re;

	re = (char *) malloc(sizeof(char) * (size + 1));
	if (!re)
		return (NULL);
	return (re);
}

char	*temp(void)
{
	char	*dest;

	dest = malloc(1);
	if (dest)
		dest[0] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		dest_index;
	int		j;

	i = 0;
	dest_index = 0;
	if (size == 0)
		return (temp());
	dest = allcate_str(arr_str_len(strs, size) + ft_strlen(sep) * (size - 1));
	if (dest)
	{
		while (i < size)
		{
			j = 0;
			while (strs[i][j])
				dest[dest_index++] = strs[i][j++];
			i++;
			j = 0;
			while (sep[j] && i < size)
				dest[dest_index++] = sep[j++];
		}
		dest[dest_index] = '\0';
	}
	return (dest);
}

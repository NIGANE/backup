/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:16:46 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/01 21:21:02 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_string(char a, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (in_string(str[i], charset))
		{
			while (in_string(str[i], charset))
				i++;
		}
		if (str[i] == '\0')
			break ;
		while (!in_string(str[i], charset) && str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	fill_arr(char **dest, char *str, char *charset)
{
	int	i;
	int	j;
	int	dest_index;

	i = 0;
	dest_index = 0;
	while (str[i] != '\0')
	{
		while (in_string(str[i], charset) && str[i] != '\0')
			i++;
		if (!in_string(str[i], charset) && str[i] != '\0')
		{
			j = 0;
			while (!in_string(str[i + j], charset) && str[i + j] != '\0')
				j++;
			dest[dest_index] = malloc(sizeof(char) * (j + 1));
			ft_strncpy(dest[dest_index++], str + i, j);
		}
		i = j + i;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		i;
	int		count_word;

	i = 0;
	if (!str || !charset)
		return (NULL);
	count_word = count(str, charset);
	dest = malloc(sizeof(char *) * (count_word + 1));
	if (!dest)
		return (NULL);
	dest[count_word] = NULL;
	fill_arr(dest, str, charset);
	return (dest);
}

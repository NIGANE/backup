/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:16:46 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/03 15:52:18 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_string(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	strs_l(char *str, char *charset)
{
	int	part;
	int	count;

	part = 1;
	count = 0;
	while (*str)
	{
		if (!in_string(*str, charset) && part)
		{
			count++;
			part = 0;
		}
		else if (in_string(*str, charset))
			part = 1;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !in_string(*buffer++, charset))
		length++;
	dest = (char *) malloc(sizeof(*src) * length);
	buffer = dest;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	**tmp;
	int		part;

	strs = (char **) malloc(strs_l(str, charset) * sizeof(*strs) + 1);
	tmp = strs;
	part = 1;
	while (*str)
	{
		if (!in_string(*str, charset) && part)
		{
			part = 0;
			*tmp = ft_strdup(str, charset);
			tmp++;
		}
		else if (in_string(*str, charset))
			part = 1;
		str++;
	}
	*tmp = 0;
	return (strs);
}

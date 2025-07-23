/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:56:46 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/22 12:22:54 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ne_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sr_len;
	unsigned int	ds_len;
	unsigned int	i;

	i = 0;
	sr_len = ne_strlen(src);
	ds_len = ne_strlen(dest);
	if (size != 0)
	{
		while (src[i] != '\0' && i + ds_len < size - 1)
		{
			dest[ds_len + i] = src[i];
			i++;
		}
		dest[ds_len + i] = '\0';
	}
	if (ds_len < size)
		return (sr_len + ds_len);
	else
		return (size + sr_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:36:33 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/03 14:47:08 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str, int size)
{
	int		i;
	char	*dest;

	if (!str)
		return (NULL);
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*linked;
	int			i;

	linked = NULL;
	if (!av || ac <= 0)
		return (NULL);
	linked = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!linked)
		return (NULL);
	linked[ac].str = 0;
	i = 0;
	while (i < ac)
	{
		linked[i].size = ft_strlen(av[i]);
		linked[i].str = av[i];
		linked[i].copy = ft_strdup(av[i], linked[i].size);
		i++;
	}
	linked[i].str = 0;
	linked[i].size = 0;
	linked[i].copy = 0;
	return (linked);
}

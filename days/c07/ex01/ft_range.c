/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:03:08 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/01 10:14:17 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	size = max - min;
	if (size <= 0)
		return (NULL);
	range = malloc(sizeof(int) * (size));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
}

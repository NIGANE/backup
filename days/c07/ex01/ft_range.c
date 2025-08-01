/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:03:08 by amerkht           #+#    #+#             */
/*   Updated: 2025/08/01 21:21:44 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*buffer;

	if (min >= max)
		return (0);
	range = (int *) malloc(sizeof(int) * (max - min));
	buffer = range;
	while (min < max)
		*buffer++ = min++;
	return (range);
}

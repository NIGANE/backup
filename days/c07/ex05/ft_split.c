/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerkht <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:16:46 by amerkht           #+#    #+#             */
/*   Updated: 2025/07/30 19:04:36 by amerkht          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return 0;
}

int	count(char *str, char *charset)
{
        int     i;
        int     count;

        i = 0;
        count = 0;
        while (str[i])
        {
                if (in_string(str[i], charset))
                {
                        while (in_string(str[i], charset))
                                i++;
                }
                while (!in_string(str[i], charset) && str[i] != '\0')
                        i++;
                count++;
        }
        return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int	i;	

	i = 0;
	dest = malloc(sizeof(char *) * (count(str, charset) + 1));
	if (!dest)
		return NULL;
	while (str[i] != '\0')
	{
		while (in_string(str[i], charset))
			i++;
		if (!in_string(str[i], charset) && str[i] != '\0')
		{
			//count lenth;
			//allocate memo;
			//assign to dest;
		}
	}

	return dest;
}

int	main(void)
{
	int re = ft_split("hello |world/my name|is achraf", " | /");
#include <stdio.h>
	//printf("re: %d\n", re);
}

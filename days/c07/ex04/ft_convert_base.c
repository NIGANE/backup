
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_atoi_base(char *str, char *base);
int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_put(char *arr, char a)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	arr[i++] = a;
	arr[i] = '\0';
}

char	*ft_strdup(char *str)
{
	int	i;
	char	*dest;

	i = 0;
	dest = NULL;
	if(!str)
		return (NULL);
	while (str[i] != '\0')
		i++;
	dest = (char *) malloc(i + 1);
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

void	ft_to_base(int	nbr, char *base, char *arr)
{
	int	base_len;

	if (nbr < 0)
	{
		ft_put(arr, '-');
		nbr *= -1;
	}
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
	{
		ft_to_base(nbr/ base_len, base, arr);
	}
	ft_put(arr, nbr % base_len + '0');
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	str[12];
	int	atoi_ret;

	str[0] = '\0';
	if (is_valid(base_to) && is_valid(base_from))
	{
		atoi_ret = ft_atoi_base(nbr, base_from);
		printf("atoi: %d\n", atoi_ret);
		ft_to_base(atoi_ret, base_to, str);
		return (ft_strdup(str));
	}
	else
		return (NULL);
}

int	main(void)
{
#include <stdio.h>
	char	*result;
	result = ft_convert_base("-902767", "0123456789", "0123456789abcdef");
	printf("return: %s", result);
	//if (result)
		//free(result);
}

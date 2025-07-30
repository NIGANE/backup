#include <stdlib>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

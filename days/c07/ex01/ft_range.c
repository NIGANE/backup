#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (max - min <= 0)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (0);
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

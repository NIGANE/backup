#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;
	int	s_len;

	if (!src)
		return (0);
	s_len = 0;
	while (src[s_len])
		s_len++;
	dest = malloc(sizeof(char) * (s_len + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < s_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

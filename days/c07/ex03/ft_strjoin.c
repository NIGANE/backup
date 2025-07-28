

char	**ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*dest;
	int	nbr;
	int	j;

	nbr = 0;
	i = 0
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			nbr++;
	}

	printf("%d\n", nbr);
	dest = malloc(sizeof(char) * (nbr + size - 1))
	if (size <= 0)
		return dest;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[i + j] = strs[i][j]

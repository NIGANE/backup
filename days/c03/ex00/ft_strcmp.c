
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != '\0')
		return (s1[i]);
	if (s2[i] != '\0')
		return (-s2[i]);
	return (0);
}

int	main()
{
	char* str1 = "hello world";
	char* str2 = "hello world";

	printf("=>%d\n", strcmp(str1, str2));
}

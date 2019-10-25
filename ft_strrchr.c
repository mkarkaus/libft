
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	char	*str;

	i = 1;
	j = 0;
	str = (char *)s;
	while (str[j])
	{
		while (str[j] == c && str[j + i] && str[j + i] != c)
			 i++;
		if (!str[j + 1])
			str++;
		if (!str[j + i])
			return (str);
		i = 1;
		str++;
	}
	return (0);
}

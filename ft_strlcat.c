
size_t	ft_strlcat(char *dest, const char src*, size_t size)
{
	int i;
	size_t j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
	// kopio strncatista
}

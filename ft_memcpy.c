
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;

	dest2 = (char *)dest;
	src2 = (const char *)src2;
	if (!n || dest == src)
		return (dest);
	while (dest2 && src2 && n--)
		*dest2++ = *src2++;
	return (dest);
}

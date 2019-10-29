
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t		i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n - 1 && str[i] != (unsigned char)c)
		i++;
	if (str[i] == c)
		return ((void *)s + i);
	return (0);
}

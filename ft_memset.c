
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char		*str;
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	str = (char *)s;
	while (str[i] && i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}

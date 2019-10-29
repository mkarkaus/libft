
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t		i;

	i = -1;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (src2 < dest2)
		while ((int)(--n) >= 0)
			*(dest2 + n) = *(src2 + n);
	else
		while (++i < n)
			*(dest2 + i) = *(src2 + i);
	return (dest);
}

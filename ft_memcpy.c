/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:30:13 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/11/04 16:38:26 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;

	dest2 = (char *)dest;
	src2 = (const char *)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		*dest2++ = *src2++;
	return (dest);
}

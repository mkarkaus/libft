/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:30:59 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/30 11:36:09 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*str;
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

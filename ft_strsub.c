/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:19:40 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/23 18:52:58 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*fre;

	i = 0;
	if (!(fre = (char *)malloc((len + 1) * sizeof(fre))))
		return (0);
	while (s[start] && i < len)
	{
		fre[i] = s[start];
		start++;
		i++;
	}
	fre[i] = '\0';
	return (fre);
}

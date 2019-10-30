/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:27:10 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/30 16:41:59 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	while (*s)
	{
		if (*s == c)
			res = (char *)s;
		s++;
	}
	if (res)
		return (res);
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:24:44 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/24 11:44:19 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	end(char const *s, int i)
{
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (s[i] == '\0')
		return (0);
	if (s[i] != '\0')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	char	*cpy;

	k = 0;
	i = 0;
	if (!(cpy = (char *)malloc((ft_strlen(s) + 1) * sizeof(cpy))))
		return (0);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[i])
	{
		while (end(s, i) == 1)
		{
			cpy[k] = s[i];
			k++;
			i++;
		}
		i++;
	}
	cpy[k] = '\0';
	return (cpy);
}

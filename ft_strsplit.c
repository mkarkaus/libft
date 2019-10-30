/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:09:11 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/30 12:48:19 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			word++;
		i++;
	}
	if (s[i - 1] != c)
		word++;
	return (word);
}

static char	*words(char const *s, char c, int *i)
{
	int		k;
	char	*fresh;

	k = 0;
	if (!(fresh = (char *)malloc((ft_strlen(s) + 1) * (sizeof(fresh)))))
		return (0);
	while (s[*i] != c && s[*i])
	{
		fresh[k] = s[*i];
		k++;
		*i += 1;
	}
	if (s[*i] == c)
		fresh[k] = '\0';
	return (fresh);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	int		wrd;
	char	**tab;

	k = 0;
	i = 0;
	wrd = count_words(s, c);
	if (!(tab = (char **)malloc(((count_words(s, c) + 2) * sizeof(tab)))))
		return (0);
	while (k < wrd && s[i])
	{
		while (s[i] == c)
			i++;
		tab[k] = words(s, c, &i);
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

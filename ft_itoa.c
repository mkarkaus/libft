/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:30:54 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/22 17:01:35 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*fresh;
	int		i;
	int		k;

	i = ft_len(n);
	k = i;
	if (!(fresh = (char *)malloc((i + 1) * sizeof(char))))
		return (0);
	if (n == 0)
		fresh[0] = '0';
	if (n < 0)
	{
		fresh[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		i--;
		fresh[i] = n % 10 + '0';
		n = n / 10;
	}
	fresh[k] = '\0';
	return (fresh);
}
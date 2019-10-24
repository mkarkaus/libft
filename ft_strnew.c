/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:46:51 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/24 15:47:01 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;

	if (!(new = (char *)malloc(size * sizeof(new))))
		return (0);
	new[size] = '\0';
	while (size--)
		new[size] = '\0';
	return (new);
}

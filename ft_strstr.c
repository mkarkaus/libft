/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:52:41 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/24 17:24:55 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int 	i;
	char	*hay;
	char	*need;

	i = 0;
	hay = (char *)haystack;
	need = (char *)needle;
	if (!needle)
		return (hay);
	while (*haystack)
	{
		while (*haystack == needle[i] && *haystack)
		{
			i++;
			haystack++;
		}
		if (!*haystack && !needle[i])
			return (need);
		else
			i = 0;
		haystack++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:21:07 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/10/24 17:25:20 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//char	*strncpy(char *dst, const char *src, size_t len);
//char	testi(unsigned int i, char c);

int		main()
{
	size_t len = 4;
//	int i = 'u';
//	int j = ;
//	unsigned int k = 3;
//	int fd = 1;
//	char c = '*';
//	char d = '';
//	char e = '';
	char *f = "lakka";
//	const char g[6] = "sieni";
//	char *h = "";

//	ft_putchar(c);
//	ft_putnbr(i);
//	ft_putstr(g);

//	printf("%s", ft_strcat(f, g));
//	printf("%c", '\n');
//	printf("%s", strcat(f, g));

//	printf("%s", ft_strncat(f, g, len));
//	printf("%c", '\n');
//	printf("%s", strncat(f, g, len));

	printf("%s", f);
	ft_bzero(f, len);
	printf("%c", '\n');
	printf("%s", f);

//	printf("%s", ft_strcpy(f, g));
//	printf("%c", '\n');
//	printf("%s", strcpy(f, g));

//	printf("%s", ft_strdup(f));
//	printf("%c", '\n');
//	printf("%s", strdup(f));

//	printf("%s", ft_strstr(f, g));
//	printf("%c", '\n');
//	printf("%s", strstr(f, g));

//	printf("%s", ft_strncpy(f, g, len));
//	printf("%c", '\n');
//	printf("%s", strncpy(f, g, len));

//	printf("%s", g);
//	ft_striteri(g, testi);
//	printf("%s", g);

//	printf("%s", f);
//	printf("%c", '\n');
//	ft_strclr(f);
//	printf("%s", f);
//	printf("%c", '\n');

//	void *cpy;

//	cpy = ft_strdup("talot");
//	printf("%s", cpy);
//	ft_memdel(&cpy);
//	printf("%s", cpy);

//	printf("%d", ft_strnequ(f, g, len));

//	printf("%s", ft_itoa(i));

//	ft_putchar_fd(c, fd);
	
//	ft_putstr_fd(g, fd);

//	ft_putnbr_fd(i, fd);

//	ft_putendl_fd(f, fd);

//	ft_putendl(g);

//	printf("%s", ft_strmapi(g, testi));

//	char **str;

//	str = ft_strsplit(f, c);

//	while (str[i] && i < )
//	{
//		printf("%s", str[i]);
//		printf("%c", '\n');
//		i++;
//	}


//	printf("%s", ft_strcpy(ft_strnew(len), "kala"));
	
//	printf("%s", ft_strtrim(g));

//	printf("%s", ft_strjoin(f, g));

//	printf("%s", ft_strsub(f, k, len));i

//	printf("%s", ft_strmap(f, testi));

//	printf("%s", ft_strmapi(f, testi));

//	printf("%c", ft_tolower(i));

//	printf("%c", ft_toupper(i));
	
//	printf("%d", ft_isprint(i));

//	printf("%d", ft_isascii(i));

//	printf("%d", ft_isalnum(i));

//	printf("%d", ft_isdigit(i));

//	printf("%d", ft_isalpha(i));

//	printf("%d", ft_strncmp(f, g, len));

//	printf("%s", ft_strchr(f, i));
	
//	printf("%s", ft_strrchr(f, i));

	return (0);
}


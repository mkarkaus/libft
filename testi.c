/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarkaus <mkarkaus@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:04:50 by mkarkaus          #+#    #+#             */
/*   Updated: 2019/11/06 16:30:03 by mkarkaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	testi(void *content, size_t size)
{
	if (size != 0)
		free(content);
}

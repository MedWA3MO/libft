/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:15:23 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 12:47:07 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			c;
	unsigned char	*zset;

	zset = (unsigned char *)s;
	c = 0;
	while (c < n)
	{
		zset[c] = '\0';
		c++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:32:23 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 12:02:56 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*mset;

	mset = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		mset[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

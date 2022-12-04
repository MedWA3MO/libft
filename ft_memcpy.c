/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:51:10 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 14:01:12 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	i = 0;
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (!ds && !sr)
		return (NULL);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}

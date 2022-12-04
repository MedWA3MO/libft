/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:15:32 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 11:54:38 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (!ds && !sr)
		return (NULL);
	if (!len)
		return (ds);
	if (ds > sr)
	{
	len--;
		while (len > 0)
		{
			ds[len] = sr[len];
			len--;
		}
		ds[len] = sr[len];
	}
	else
		ds = ft_memcpy(ds, sr, len);
	return (ds);
}

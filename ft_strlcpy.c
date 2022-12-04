/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:33:59 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 14:00:35 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	while (src[a] && ((a + 1) < dstsize))
	{
		dst[a] = src [a];
		a++;
	}
	dst[a] = '\0';
	return (i);
}

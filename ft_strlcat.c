/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:24:59 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 13:56:07 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = ft_strlen(src);
	if (!dstsize)
		return (i);
	j = ft_strlen(dst);
	if (j > dstsize)
		return (i + dstsize);
	while (src[k] && (j + k + 1) < dstsize)
	{
		dst[j + k] = src[k];
		k++;
	}
	dst[j + k] = '\0';
	return (i + j);
}

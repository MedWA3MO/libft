/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:11:19 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/28 11:15:59 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	c;

	if (!(*needle))
		return ((char *)haystack);
	c = ft_strlen((char *)needle);
	i = 0;
	while (haystack[i])
	{
		a = 0;
		while (haystack[i + a] == needle[a] && needle[a] && haystack[i + a]
			&& (i + a) < len)
				a++;
		if (a == c)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

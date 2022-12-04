/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:09:41 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 13:48:50 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	int		i;

	i = 0;
	d = (char)c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == d)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

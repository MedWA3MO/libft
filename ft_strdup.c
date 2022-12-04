/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:40:48 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/28 11:20:40 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	a;
	size_t	i;

	i = 0;
	a = ft_strlen(s1);
	str = (char *) malloc(sizeof(char) * (a + 1));
	if (!str)
		return (NULL);
	while (i < a)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:10:45 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/28 12:01:04 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		a;
	int		b;
	int		i;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = -1;
	join = (char *) malloc(sizeof(char) * (a + b + 1));
	if (!join)
		return (NULL);
	while (++i < a)
		join[i] = s1[i];
	i = -1;
	while (++i < b)
		join[i + a] = s2[i];
	join[i + a] = '\0';
	return (join);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:35:45 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 14:04:53 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_there(const char *str, char d)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == d)
			return (1);
		i++;
	}
	return (0);
}

static char	*str_blk(char const *str, int i, int a)
{
	char	*tri;
	int		j;

	tri = malloc(sizeof(char) * (a - i + 2));
	if (!tri)
		return (NULL);
	j = 0;
	while (j < a - i + 1)
	{
		tri[j] = str[i + j];
		j++;
	}
	tri[j] = '\0';
	return (tri);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		i;
	int		j;
	char	*trim;

	i = 0;
	j = 0;
	a = ft_strlen(s1);
	a--;
	while (s1[i] && is_there(set, s1[i]))
		i++;
	while (a > j && is_there(set, s1[a]))
		a--;
	if (a - i + 1 < 0)
		trim = ft_strdup("");
	else
		trim = str_blk(s1, i, a);
	return (trim);
}

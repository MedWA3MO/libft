/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:26:14 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/28 14:00:00 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*put_str(const char *str, char d)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && str[i] != d)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
	{
		free(word);
		return (NULL);
	}
	i = 0;
	while (str[i] && str[i] != d)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**callfree(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**allospl(const char *s, char c, int j)
{
	char	**spl;

	spl = malloc(sizeof(char *) * (j + 1));
	if (!spl)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			spl[j] = put_str(s, c);
			if (!spl[j])
				return (callfree(spl));
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	spl[j] = 0;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	split = allospl(s, c, j);
	return (split);
}

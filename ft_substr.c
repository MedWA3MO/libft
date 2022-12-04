/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:31:39 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/28 12:09:12 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start >= ft_strlen(s))
		sub = (char *) malloc(ft_strlen(s) - start + 1);
	else
		sub = (char *) malloc(len + 1);
	if (!sub)
		return (NULL);
	while (s[start] && (i < len))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
// int main()
// {
// 	printf("%s\n",ft_substr("qwertyuiosdfgh", 13, 5));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:06:22 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/28 12:14:19 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*min_itoa(void)
{
	long	n;
	int		i;
	char	*to;

	i = 11;
	n = -2147483648;
	n *= -1;
	to = (char *) malloc(i + 1);
	if (!to)
		return (0);
	to[i--] = '\0';
	while (i >= 1)
	{
		to[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	to[i] = '-';
	return (to);
}

static char	*neg_itoa(int k, int i)
{
	char	*to;

	k *= (-1);
	to = (char *) malloc(sizeof(char) * (i + 2));
	if (!to)
		return (0);
	to[0] = '-';
	to[i + 1] = '\0';
	while (i > 0)
	{
		to[i] = (k % 10) + 48;
		k /= 10;
		i--;
	}
	return (to);
}

static char	*pos_itoa(int k, int i)
{
	char	*to;

	to = (char *) malloc(sizeof(char) * (i + 1));
	if (!to)
		return (0);
	to[i--] = '\0';
	while (i >= 0)
	{
		to[i] = (k % 10) + 48;
		k /= 10;
		i--;
	}
	return (to);
}

char	*ft_itoa(int n)
{
	int		k;
	int		i;
	char	*toa;

	i = 0;
	k = n;
	if (n == 0)
		return (ft_strdup("0"));
	while (n)
	{
		n /= 10;
		i++;
	}
	if (k == -2147483648)
		toa = min_itoa();
	else if (k < 0)
		toa = neg_itoa(k, i);
	else
		toa = pos_itoa(k, i);
	return (toa);
}
// int main()
// {
//     char *s;
//     s = ft_itoa(777);
//     printf("%s",s);
//     return (0);
// }

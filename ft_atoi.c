/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:40:29 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/29 16:26:19 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cln_atoi(const char *str)
{
	int	i;
	int	s;

	i = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	return (i * s);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	s;
	int	v;

	v = 0;
	s = 1;
	j = -1;
	i = cln_atoi(str);
	if (i < 0)
	{
		s = -1;
		i *= -1;
	}
	while (str[i + ++j] >= '0' && str[i + j] <= '9')
		v = (v * 10) + (str[i + j] - 48);
	if (j >= 19)
	{
		if (s == 1)
			return (-1);
		return (0);
	}
	return (v * s);
}

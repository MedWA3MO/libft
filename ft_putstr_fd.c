/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:20:39 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/18 21:56:34 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	a;
	size_t	i;

	a = ft_strlen(s);
	i = 0;
	while (i < a)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:48:05 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/30 13:17:16 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putnbr(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		write (fd, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		ft_putnbr(nb * (-1), fd);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	else if ((nb >= 0)
		&& (nb <= 9))
	{
		c = nb + 48;
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}

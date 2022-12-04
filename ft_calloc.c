/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:22:32 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/29 18:35:27 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void				*s;
	unsigned long long	b;

	b = count * size;
	if (b > 4294967295)
		return (NULL);
	s = malloc (size * count);
	if (!s)
		return (0);
	ft_bzero(s, (count * size));
	return (s);
}
// int main()
// {
// 	printf("%s\n",calloc(21474999,2147499));
// 	printf("%s\n",ft_calloc(21474999,2147499));
// 	return(0);
// }

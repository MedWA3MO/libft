/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:16:39 by moouaamm          #+#    #+#             */
/*   Updated: 2022/10/28 17:46:19 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = (*lst);
	if (!lst || !new)
		return ;
	if (!(*lst))
		(*lst) = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}

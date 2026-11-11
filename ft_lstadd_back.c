/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:11:29 by kmota             #+#    #+#             */
/*   Updated: 2026/11/11 16:03:06 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (!lst || !new)
	{
		return (0);
	}
	i = *lst;
	if (!*lst)
	{
		*lst = new;
		return (0);
	}
	else
	{
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = new;
	}
}

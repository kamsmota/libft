/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:11:29 by kmota             #+#    #+#             */
/*   Updated: 2026/11/09 18:07:57 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	* i;
	
	i = *lst;
	if (*lst == NULL)
	{
		*lst = new;
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

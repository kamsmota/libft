/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:49:05 by kmota             #+#    #+#             */
/*   Updated: 2026/11/06 13:04:31 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*	i;

	i = lst;
	if (lst == NULL)
	{
		return (NULL);
	}
	while (i->next != NULL)
	{
		i = i->next;
	}
	return (i);
}

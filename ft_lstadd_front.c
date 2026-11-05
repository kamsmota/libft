/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:28:29 by kmota             #+#    #+#             */
/*   Updated: 2026/11/05 19:43:03 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *n;
	
	n = malloc(sizeof(t_list));
	if (!n)
	{
		return (NULL);
	}
	n->content = new;
	n->next = *lst;
	*lst = n;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:21:13 by kmota             #+#    #+#             */
/*   Updated: 2026/11/06 13:41:10 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_del(t_list * n)
{
	free(n);
}
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	// lst is the node to free and del i the function used to delete
	// must take lst as parameter and free its content using the function 'del'
}

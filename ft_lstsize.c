/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:43:41 by kmota             #+#    #+#             */
/*   Updated: 2026/11/10 22:51:03 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*i;
	unsigned int	counter;

	i = lst;
	counter = 0;
	while (i != NULL)
	{
		counter++;
		i = i->next;
	}
	return (counter);
}

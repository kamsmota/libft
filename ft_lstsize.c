/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:43:41 by kmota             #+#    #+#             */
/*   Updated: 2026/11/05 19:48:31 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list * i;
	int counter;

	i = lst;
	counter = 0;
	while(i != NULL)
	{
		counter++;
		i = i->next;
	}
}
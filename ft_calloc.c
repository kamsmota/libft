/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:34:38 by kams              #+#    #+#             */
/*   Updated: 2026/10/19 20:50:05 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
	size_t i;
	unsigned char *str;

	
	str = malloc(n * size);
	if (str  == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < n * size)
	{
		str[i] = 0;
		i++;
	}
	return (str); 
}
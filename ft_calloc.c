/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:56:14 by kmota             #+#    #+#             */
/*   Updated: 2026/11/11 13:42:15 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	char	*str;

	if (size != 0 && n > __SIZE_MAX__ / size)
		return (NULL);
	str = malloc(n * size);
	if (str == NULL)
		return (0);
	i = 0;
	while (i < n * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

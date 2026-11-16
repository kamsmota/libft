/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:56:14 by kmota             #+#    #+#             */
/*   Updated: 2026/11/13 19:05:50 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	char	*str;

	if (size != 0 && n > __SIZE_MAX__ / size)
		return (NULL);
	if (n == 0 || size == 0)
		return (malloc(1));
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

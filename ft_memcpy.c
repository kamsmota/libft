/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:57:15 by kmota             #+#    #+#             */
/*   Updated: 2026/11/10 22:42:49 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	if (n == 0 || (dest == src))
	{
		return (dest);
	}
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dst);
}

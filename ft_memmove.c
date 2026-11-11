/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:57:19 by kmota             #+#    #+#             */
/*   Updated: 2026/11/11 21:56:00 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!src && !dest)
	{
		return (0);
	}
	if (n == 0 || (dest == src))
		return (dest);
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}

// A B C D E
// I = 2
// 2 > 0
// I = 1;
// D[I] = B
// 1 > 0
// I = 0
// D[0] = A

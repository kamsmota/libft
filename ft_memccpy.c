/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 21:35:31 by kams              #+#    #+#             */
/*   Updated: 2026/10/19 15:35:20 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	unsigned char *s;
	unsigned char *d;
	size_t i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			return (d + i + 1);
		}
		i++;
	}
	return (0);
}
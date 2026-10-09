/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 20:09:53 by kams              #+#    #+#             */
/*   Updated: 2026/10/09 20:29:51 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *s1;
	unsigned char *s2;
	
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 20:46:01 by kams              #+#    #+#             */
/*   Updated: 2026/10/09 21:02:57 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s;
	unsigned char *t;

	i = 0;
	s = (unsigned char *)s1;
	t = (unsigned char *)s2;

	while (i < n)
	{
		if (s[i] != t[i])
		{
			return (s[i] - t[i]);
		}
		i++;
	}
	return (0);
}
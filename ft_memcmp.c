/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:57:12 by kmota             #+#    #+#             */
/*   Updated: 2026/11/10 14:29:05 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*t;

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

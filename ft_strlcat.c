/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:05:24 by kams              #+#    #+#             */
/*   Updated: 2026/10/08 20:03:13 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize)
{
	size_t ndst;
	size_t nsrc;
	size_t i;
	
	ndst = ft_strlen(dst);
	nsrc = ft_strlen(src);

	if (dsize <= ndst)
	{
		return (dsize + nsrc);
	}
	i = 0;
	while (src[i] && (ndst + i < dsize - 1))
	{
		dst[ndst + i] = src[i];
		i++;
	}
	dst[ndst + i] = '\0';

	return (ndst + nsrc);
}
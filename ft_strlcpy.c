/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:50:28 by kams              #+#    #+#             */
/*   Updated: 2026/10/08 22:19:57 by kams             ###   ########.fr       */
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


size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (src[i] == '\0')
	{
		return(0);
	}
	while (src[i] && i < dsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
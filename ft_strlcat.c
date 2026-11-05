/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:57:47 by kmota             #+#    #+#             */
/*   Updated: 2026/11/05 17:20:54 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	ndst;
	size_t	nsrc;
	size_t	i;

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

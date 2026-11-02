/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:58:07 by kmota             #+#    #+#             */
/*   Updated: 2026/11/02 16:20:02 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return ((char *) &haystack[0]);
	}
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && needle[j] && haystack[i + j]
			&& haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}

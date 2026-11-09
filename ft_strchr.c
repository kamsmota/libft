/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:57:32 by kmota             #+#    #+#             */
/*   Updated: 2026/11/09 13:31:35 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	if (s == NULL)
	{
		i = ft_strlen(s);
		return ((char *) &s[i]);
	}
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *) &s[i]);
	}
	return (0);
}

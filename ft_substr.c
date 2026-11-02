/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:58:28 by kmota             #+#    #+#             */
/*   Updated: 2026/11/02 16:17:33 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	strsize;
	size_t	i;

	if (s == NULL)
	{
		return (0);
	}
	strsize = ft_strlen(s);
	if (start >= strsize)
	{
		len = 0;
	}
	else if (len > strsize - start)
	{
		len = strsize - start;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < len && start + i < strsize)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

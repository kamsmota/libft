/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:40:31 by kams              #+#    #+#             */
/*   Updated: 2026/10/20 21:32:31 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str; 
	size_t strsize; 
	size_t i; 
	
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

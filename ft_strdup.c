/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:39:32 by kams              #+#    #+#             */
/*   Updated: 2026/10/19 18:53:48 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(const char *s)
{
	size_t i;
	size_t size;
	char *dup;

	i = 0;
	size = ft_strlen(s);

	dup = malloc((size + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
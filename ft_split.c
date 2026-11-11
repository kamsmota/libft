/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:39:22 by kmota             #+#    #+#             */
/*   Updated: 2026/11/11 16:48:40 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_chrcstr(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}

static	void	ft_frwords(char **str, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(str[i++]);
	free(str);
}

static void	ft_putwor(char **str, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		str[j++] = ft_substr(s, start, i - start);
	}
	str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_chrcstr(s, c);
	str = ft_calloc(size + 1, sizeof(char *));
	if (!str)
		return (NULL);
	ft_putwor(str, s, c);
	i = 0;
	while (i < size)
	{
		if (!str[i])
		{
			ft_frwords(str, size);
			return (NULL);
		}
		i++;
	}
	return (str);
}

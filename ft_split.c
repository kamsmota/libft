/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:39:22 by kmota             #+#    #+#             */
/*   Updated: 2026/11/10 17:07:02 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_chrcstr(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			counter++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
	}
	return (counter);
}

static	char	*ft_sstr(char const *s, unsigned int start, size_t len)
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
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static	void	frwords(char **str, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count && str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
	{
		return (0);
	}
	str = malloc((ft_chrcstr(s, c) + 1) * sizeof(char *));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		start = i;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		if (i > start)
		{
			str[j] = ft_sstr(s, start, i - start);
			if (!str[j]) // if any allocation fails
			{
				frwords(str, j);
				return (0);
			}
			j++;
		}
	}
	str[j] = NULL;
	return (str);
}

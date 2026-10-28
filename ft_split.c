/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:28:18 by kams              #+#    #+#             */
/*   Updated: 2026/10/28 22:35:41 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

// function to count words (ft_strchr modified)
static size_t ft_chrcstr(char const *s, char c)
	{
		size_t i;
		size_t counter;
		i = 0;
		counter = 0;
		while(s[i])
		{
			if (s[i] != (unsigned char)c)
			{
				counter++;
				while(s[i] != (unsigned char)c)
				{
					i++;
				}
			}
			else
			{
				i++;	
			}
		}
		return (counter);
	}

// function to copy the string to te memory allocated (ft_substr modified)
static char *ft_substr(char const *s, unsigned int start, size_t len)
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

// function to free the memory
static void	frwords(char **str, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
char **ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
	{
		return (0);
	}
	str = malloc((ft_chrcstr(s, c) + 1)* sizeof(char *));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
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
		if (i > start) // verify if it has advanced at least one character 
		{
			str[j] = ft_substr(s, start, i - start); // the function receives the "end" of the word it've found - the start of that
			if (!str[j])
			{
				free_words(str, j);
				return (0);
			}
			j++;
		}
	}
	str[j] = '\0';
	return (str);
}
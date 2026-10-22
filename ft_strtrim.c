/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:00:34 by kams              #+#    #+#             */
/*   Updated: 2026/10/22 16:45:53 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int begin;
	int end;
	int i;
	char *str;

	begin = 0;
	end = ft_strlen(s1);
	while (s1[begin] && ft_strchr(set, s1[begin]))
	{
		begin++;
	}
	while (s1[end] && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	str = malloc((end - begin + 1) *sizeof(char));
	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (begin < end)
	{
		str[i] = s1[begin++];
		i++;
	}
	return (str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:58:22 by kmota             #+#    #+#             */
/*   Updated: 2026/11/02 16:18:30 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	begin;
	int	end;
	int	i;
	char	*str;

	begin = 0;
	end = ft_strlen(s1);
	while (s1[begin] && ft_strchr(set, s1[begin]))
	{
		begin++;
	}
	while (end > begin && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	str = malloc((end - begin + 1) * sizeof(char));
	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (begin < end)
	{
		str[i] = s1[begin];
		i++;
		begin++;
	}
	str[i] = '\0';
	return (str);
}

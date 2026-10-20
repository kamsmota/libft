/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 22:47:04 by kams              #+#    #+#             */
/*   Updated: 2026/10/20 23:29:03 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	
	size_t lenone;
	size_t lentwo;
	char *str;

	lenone = ft_strlen(s1);
	lentwo = ft_strlen(s2);
	str = malloc ((lenone + lentwo + 1) * sizeof(char));
	if (str == NULL)
	{
		return (0);
	}
	ft_memcpy(str, s1, lenone);
	ft_memcpy(str + lenone, s2, lentwo); //str + lenone so it starts in the lenone index
	str[lenone + lentwo] = '\0';
	return (str);	
}
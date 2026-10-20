/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 23:18:32 by kams              #+#    #+#             */
/*   Updated: 2026/10/20 23:22:09 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

// alternative where recall previous function, less code
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
	ft_memcpy(str, s2, lentwo);
	str[lenone + lentwo] = '\0';
	return (str);
}
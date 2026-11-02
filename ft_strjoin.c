/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:57:41 by kmota             #+#    #+#             */
/*   Updated: 2026/11/02 16:40:27 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenone;
	size_t	lentwo;
	char	*str;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:58:36 by kmota             #+#    #+#             */
/*   Updated: 2026/11/05 18:45:06 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char)c == '\0')
	{
		return (0);
	}
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
	{
		return (c - 32);
	}
	return ((unsigned char)c);
}

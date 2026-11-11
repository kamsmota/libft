/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:32:31 by kmota             #+#    #+#             */
/*   Updated: 2026/11/10 22:48:54 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb <= 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nb;
	long	div;
	int		i;

	nb = n;
	i = (nb < 0);
	if (nb < 0)
		nb = -nb;
	div = 1;
	while (nb / div > 9)
		div *= 10;
	ptr = malloc(ft_numlen(n) + 1);
	if (!ptr)
		return (NULL);
	if (i)
		ptr[0] = '-';
	while (div)
	{
		ptr[i++] = nb / div + '0';
		nb %= div;
		div /= 10;
	}
	ptr[i] = '\0';
	return (ptr);
}

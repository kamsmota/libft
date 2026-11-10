/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:32:31 by kmota             #+#    #+#             */
/*   Updated: 2026/11/10 14:32:05 by kmota            ###   ########.fr       */
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
	int		i;
	long	div;
	long	nb;

	ptr = malloc((ft_numlen(n) + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	div = 1;
	i = 0;
	nb = n;
	if (nb < 0)
	{
		nb = nb * (-1);
		ptr[i] = '-';
		i++;
	}
	if (nb < 10)
	{
		ptr[i] = (nb + '0');
		i++;
	}
	else
	{
		while ((nb / div) > 9)
		{
			div *= 10;
		}
		while (div > 0)
		{
			ptr[i] = ((nb / div) + '0');
			nb = nb % div;
			div /= 10;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

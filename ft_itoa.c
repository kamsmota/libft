/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:32:31 by kmota             #+#    #+#             */
/*   Updated: 2026/11/03 18:41:32 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *ptr;
	int d;
	int i;
	int nb;
	int div;

	d = 0; //contar casa decimal
	nb = n;
	while (nb > 0)
	{
		nb /= 10;
		d++;
	}
	ptr = malloc((d + 1) * sizeof(char));
	div = 1;
	i = 0;
	if (n < 10)
	{
		ptr[i] = (n + '0');
		i++;
	}
	else
	{
		while ((n / div) > 1)
		{
			div *= 10;
		}
		while (div > 0)
		{
			ptr[i] = ((n / div) + '0');
			n = n % div;
			div /= 10;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

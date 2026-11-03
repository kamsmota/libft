/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:32:31 by kmota             #+#    #+#             */
/*   Updated: 2026/11/03 15:58:19 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *ptr;
	int i;
	int div;
	int v;

	i = 0;
	div = 1;
	v = 0;
	ptr = "";
	if (n < 10)
	{
		v = 1;
		ptr[i] = (n + '0');
		return (ptr);
	}
	else if ((n > 9))
	{
		while ((n / div) > 9)
		{
			div *= 10;
			v++;
		}
		while (div > 0)
		{
			ptr[i] = n / div;
			n = n % div;
			div /= 10;
			i++;
		}
	}
	ptr[i + 1] = '\0';
	return (ptr);
}

int main ()
{
	printf("ft_itoa(1): %s", ft_itoa(1));
	printf("ft_itoa(12): %s", ft_itoa(12));
	printf("ft_itoa(1234): %s", ft_itoa(1234));
}
// malloc deve vir antes de ptr receber algum valor
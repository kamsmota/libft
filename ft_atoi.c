/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 19:27:39 by kams              #+#    #+#             */
/*   Updated: 2026/10/03 20:43:56 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	if (nptr[i] == '\0')
	{
		return (0);
	}
	while (nptr[i])
	{
		while (nptr[i] == ' ')
		{
			i++;
		}
		if (nptr[i] == '-' || nptr[i] == '+')
		{
			if (nptr[i] == '-')
			{
				sign = -sign;
			}
			i++;
			break;
		}
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			res = ((res * 10) + (nptr[i] - 48));
			i++;
		}
	}	
	return (sign * res);
}

int main ()
{
	char teste[] = "  +1234";
	printf("resultado: %d", ft_atoi(teste));
}
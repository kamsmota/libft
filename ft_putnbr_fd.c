/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:34:12 by kmota             #+#    #+#             */
/*   Updated: 2026/11/05 14:40:16 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	div;
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		div = 1;
		while ((n / div) > 9)
		{
			div *= 10;
		}
		while (div > 0)
		{
			c = (n / div) + '0';
			write(fd, &c, 1);
			n = n % div;
			div /= 10;
		}
	}
}

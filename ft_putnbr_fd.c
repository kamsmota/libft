/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:34:12 by kmota             #+#    #+#             */
/*   Updated: 2026/11/10 14:32:13 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		div;
	char	c;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
	else
	{
		div = 1;
		while ((nb / div) > 9)
		{
			div *= 10;
		}
		while (div > 0)
		{
			c = (nb / div) + '0';
			write(fd, &c, 1);
			nb = nb % div;
			div /= 10;
		}
	}
}

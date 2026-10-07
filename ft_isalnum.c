/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:32:18 by kmota             #+#    #+#             */
/*   Updated: 2026/10/01 22:38:44 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int	c)
{
	if (((unsigned char)c >= '0' && (unsigned char)c <= '9')
	|| ((unsigned char)c >= 'a' && (unsigned char)c <= 'z') 
	|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
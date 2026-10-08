/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 20:32:41 by kams              #+#    #+#             */
/*   Updated: 2026/10/08 21:18:53 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[len - i] == c)
		{
			return ((char *) &s[len - i]);
		}
		i++;
	}
	return (0);
}
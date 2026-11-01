/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:39:24 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/27 10:57:05 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_itoa(char *p, long nb, size_t len, size_t sign)
{
	if (nb < 0)
		nb = -nb;
	while (len > sign)
	{
		p[--len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign)
		p[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*p;
	long	nb;
	size_t	len;
	size_t	sign;

	nb = n;
	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = -nb;
	}
	len = 1;
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	len += sign;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	fill_itoa(p, n, len, sign);
	return (p);
}

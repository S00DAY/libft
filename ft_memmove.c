/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:02:26 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/31 15:17:51 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ps;
	unsigned char		*pd;

	if (!n || dest == src)
		return (dest);
	ps = (const unsigned char *)src;
	pd = (unsigned char *)dest;
	if (pd > ps)
	{
		i = n;
		while (i-- > 0)
			pd[i] = ps[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 09:38:07 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/31 16:16:11 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ps;
	unsigned char		*pd;

	i = 0;
	ps = src;
	pd = dest;
	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}

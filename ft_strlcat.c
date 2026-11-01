/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:50:16 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/31 15:18:57 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;

	i = 0;
	d = 0;
	j = 0;
	while (src[j])
		j++;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + j);
	d = i;
	while (d < size - 1 && src[d - i])
	{
		dst[d] = src[d - i];
		d++;
	}
	dst[d] = '\0';
	return (i + j);
}

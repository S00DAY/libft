/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:59:13 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/31 15:18:36 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == a)
			return ((char *)(s + i));
		i++;
	}
	if (a == '\0')
		return ((char *)(s + i));
	return (NULL);
}

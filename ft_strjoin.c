/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 08:39:41 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/19 11:41:30 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = malloc(l1 + l2 + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, l1 + 1);
	ft_strlcat(p, s2, l1 + l2 + 1);
	return (p);
}

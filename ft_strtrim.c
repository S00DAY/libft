/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 09:00:22 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/20 15:32:53 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	a;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	a = 0;
	j = 0;
	while (s1[i])
		i++;
	while (i > j && isset(s1[i - 1], set))
		i--;
	while (j < i && isset(s1[j], set))
		j++;
	p = malloc(i - j + 1);
	if (!p)
		return (NULL);
	while (j != i)
		p[a++] = s1[j++];
	p[a] = '\0';
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:27:30 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/20 15:33:27 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cntwrd(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	free_split(char **p, size_t n)
{
	while (n > 0)
		free(p[--n]);
	free(p);
}

static char	**splot(char **p, char const *s, char c)
{
	size_t	i;
	size_t	wrd;
	size_t	start;

	i = 0;
	wrd = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		p[wrd] = ft_substr(s, start, i - start);
		if (!p[wrd])
			return (free_split(p, wrd), NULL);
		wrd++;
	}
	p[wrd] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	wrd;
	char	**p;

	if (!s)
		return (NULL);
	wrd = cntwrd(s, c);
	p = malloc(sizeof(char *) * (wrd + 1));
	if (!p)
		return (NULL);
	return (splot(p, s, c));
}

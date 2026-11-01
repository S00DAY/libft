/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:44:12 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/31 15:22:17 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soulkhat <soulkhat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:54:06 by soulkhat          #+#    #+#             */
/*   Updated: 2026/10/28 12:33:13 by soulkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*cntnt;
	t_list	*new;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		cntnt = f(lst->content);
		node = ft_lstnew(cntnt);
		if (!cntnt || !node)
		{
			ft_lstclear(&new, del);
			free(node);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:28:27 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/11/02 23:21:52 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*new;

	lst2 = NULL;
	(void)del;
	while (lst != NULL)
	{
		new = ft_lstnew(lst->content);
		new->content = f(lst->content);
		ft_lstadd_back(&lst2, new);
		lst = lst->next;
	}
	return (lst2);
}

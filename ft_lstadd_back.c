/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:53:08 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/11/02 18:49:50 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	l = *lst;
	if (l == NULL)
	{
		new->next = NULL;
		*lst = new;
	}
	else
	{
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = new;
	}
}

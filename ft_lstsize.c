/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:08:25 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/11/02 17:26:48 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

//#include <stdio.h>

/*
int	main(void)
{
	char	txt[] = "txt";
	t_list	*lst2;

	lst2 = ft_lstnew(txt);
	printf("%i\n", ft_lstsize(lst2));
	t_list *lst3 = ft_lstnew(txt);
	lst2->next = lst3;
	printf("%i", ft_lstsize(lst2));
	return (0);
}
*/

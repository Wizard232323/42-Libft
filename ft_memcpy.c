/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:46:35 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/20 00:20:19 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == 0 && dest == 0)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
    char src[] = "abcdefghi";
    char dest[] = "123456789";

    printf("ceci est un resultat : %s", (char *)ft_memcpy(src , dest, 5));
    printf("ceic est un autre resultat : %s" , (char *)memcpy(src , dest, 5));
}*/

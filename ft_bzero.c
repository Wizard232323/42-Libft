/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:03:06 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/18 00:59:10 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s2;

	s2 = (char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
}
/*
int main()
{
	char s[] = "chocapic";

	ft_bzero(s, 4);

	printf("la reponse est %d%d%d%d suite = %s", s[0], s[1], s[2], s[3], s + 4);
}*/

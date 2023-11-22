/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:49:51 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/31 17:41:26 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	char	*s3;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	l = 0;
	s3 = (char *)malloc((i + j) + 1);
	if (!s3)
		return (NULL);
	while (s1[k])
	{
		s3[k] = s1[k];
		k++;
	}
	while (s2[l])
	{
		s3[k + l] = s2[l];
		l++;
	}
	s3[k + l] = '\0';
	return (s3);
}
/*
int	main()
{



}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:03:47 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/23 21:45:00 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	i = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size == 0)
		return (lsrc);
	while (src[i] != 0 && ldst + i < size - 1)
	{
		dst[i + ldst] = src[i];
		i++;
	}
	dst[i + ldst] = '\0';
	if (ldst > size)
		return (size + lsrc);
	return (lsrc + ldst);
}
/*
int	main()
{
	char dst[] = "vive la vie";
	char src[] = "chocapic";

	printf("original : %ld", strlcat(src, dst, 15));
	printf("concat : %ld", ft_strlcat(src, dst, 15));

}*/

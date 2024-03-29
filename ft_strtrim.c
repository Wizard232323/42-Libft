/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:35:23 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/24 18:40:14 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	size_t	i;
	size_t	j;
	size_t	k;	

	i = 0;
	k = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	final = malloc(j - i + 1);
	if (final == NULL)
		return (NULL);
	while (i != j)
	{
		final[k] = s1[i];
		i++;
		k++;
	}
	final[k] = '\0';
	return (final);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:27:34 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/23 20:09:00 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		j *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != 0)
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			k = k * 10 + nptr[i] - '0';
		else
			break ;
		i++;
	}
	return (j * k);
}

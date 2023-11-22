/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 02:36:01 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/30 15:43:34 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	long int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			j;
	long int	n2;

	n2 = n;
	j = len(n);
	s = (char *)malloc(j + 1);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n2 = -n2;
	}
	s[j] = '\0';
	j--;
	if (n == 0)
		s[j] = '0';
	while (n2 > 0)
	{
		s[j] = n2 % 10 + '0';
		n2 = n2 / 10;
		j--;
	}
	return (s);
}
/*
int	main()
{

	printf("voici combien de caractere il y a ; 
	%d et itoa donne ; %s", len(0) , ft_itoa(-1234));

}
*/

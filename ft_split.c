/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoubbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:01:53 by ekoubbi           #+#    #+#             */
/*   Updated: 2023/10/31 17:34:48 by ekoubbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbword(char *s, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (!*s)
		return (0);
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**rep;
	int		word;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	k = 0;
	word = nbword((char *)s, c);
	rep = (char **)malloc(sizeof (char *) * (word + 1));
	if (!rep)
		return (NULL);
	rep[word] = NULL;
	while (k < word)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		j = i;
		while (s[i] != c && s[i] != 0)
			i++;
		rep[k] = ft_substr((char *)s, j, i - j);
		k++;
	}
	return (rep);
}
/*
int main()
{
    int i;
    char c;
    char const  *s;
    char **rep;

    c = ' ';
    s = " bla ";
    i = 0;

    rep = ft_split(s, c);
	
    while (rep[i])
    {
        printf("tab : %s\n", rep[i]);
        i++;
    }
}*/

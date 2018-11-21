/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 17:51:32 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *str, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i - 1] == c || str[i - 1] == 0))
		{
			n++;
		}
		i++;
	}
	return (n + 1);
}

static	char	*ft_add(char *str, char c)
{
	int		i;
	int		k;
	char	*word;

	i = 0;
	k = 0;
	while (str[k] && str[k] != c)
		k++;
	word = malloc(sizeof(char) * k + 1);
	if (word == NULL)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	char	**tab;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = word_count((char*)s, c);
	tab = malloc(sizeof(char*) * k + 1);
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		if (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = ft_add((char*)s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

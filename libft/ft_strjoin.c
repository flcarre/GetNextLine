/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:00:28 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;
	int		i;
	int		b;

	b = 0;
	i = 0;
	if (!s1 && !s2)
	    return(NULL);
	else if (s1 == NULL)
		len = ft_strlen(s2);
	else if (s2 == NULL)
		len = ft_strlen(s1);
    else
	    len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	res = (char *)malloc(len * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (s1 && s1[b] && i < len)
		res[i++] = s1[b++];
	b = 0;
	while (s2 && s2[b] && i < len)
		res[i++] = s2[b++];
	res[i] = '\0';
	return (res);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 17:29:24 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int n;
	char *ret;

	i = 0;
	n = 0;
	if (s1 && s2)
	{
		if((ret = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))) == NULL)
			return (NULL);
	}
	if (s1 && s2)
	{
			while (s1[i])
				ret[n++] = s1[i++];
				i = 0;
			while (s2[i])
				ret[n++] = s2[i++];
		ret[n] = 0;
	}
	return(ret);
}

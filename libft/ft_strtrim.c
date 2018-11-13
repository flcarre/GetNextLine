/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/08 10:39:01 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	int i;
	int n;
	int j;
	char *ret;

	i = 0;
	j = 0;
	ret = NULL;
	if (str)
		n = ft_strlen(str) - 1;
	if (str)
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while ((str[n] == ' ' || str[n] == '\n' || str[n] == '\t') && n > i)
			n--;
		if((ret = malloc((n - i + 2) * sizeof(char))) == NULL)
			return (NULL);
		while(i <= n)
			ret[j++] = str[i++];
		ret[j] = 0;
	}
	return(ret);
}

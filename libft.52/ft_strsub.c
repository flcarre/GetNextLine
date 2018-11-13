/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 17:13:12 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t n)
{
	unsigned int i;
	int j;
	char *ret;

	i = 0;
	j = 0;
	if((ret = malloc((n + 1) * sizeof(char))) == NULL)
		return (NULL);
	if (str)
	{
		while(n)
		{
			while (i < start)
				i++;
			ret[j++] = str[i++];
			n--;
		}
	}
	ret[j] = 0;
	return(ret);
}

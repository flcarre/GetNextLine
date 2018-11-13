/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 16:10:11 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*ret;

	i = 0;
	if((ret = malloc((ft_strlen(src) + 1) * sizeof(char))) == 0)
	 return(NULL);
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

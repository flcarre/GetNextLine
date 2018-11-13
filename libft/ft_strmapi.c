/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 16:16:59 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int n;
	char *ret;

	n = 0;
	if (str)
		ret = ft_strdup(str);
	if (str && f && ret)
	{
		while(str[n])
		{
			ret[n] = f(n, ret[n]);
			n++;
		}
	}
	return(ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:04:20 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:14:34 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t l)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		n;

	i = 0;
	j = 0;
	n = 0;
	if (!to_find[0])
		return (str);
	while (to_find[n] != '\0')
		n++;
	while (str[i] && l >= n)
	{
		while (str[i + j] == to_find[j])
		{
			if (j + 1 == n)
				return (str + i);
			j++;
		}
		l--;
		j = 0;
		i++;
	}
	return (0);
}

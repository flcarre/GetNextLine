/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:04:20 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 14:14:31 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (to_find[i] != '\0')
		i++;
	if (i == 0)
		return (str);
	i = 0;
	while (str[i])
	{
			while (str[i + n] == to_find[n])
			{
				if (to_find[n + 1] == '\0')
					return (str + i);
				n++;
			}
		n = 0;
		i++;
	}
	return (0);
}

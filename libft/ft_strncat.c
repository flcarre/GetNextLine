/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:07:38 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 14:14:49 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n] && nb > n)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

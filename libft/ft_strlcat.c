/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:07:38 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/15 13:32:55 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	t;
	unsigned int	u;

	t = ft_strlen(dest);
	if (n < t)
		return (ft_strlen((char*)src) + n);
	u = 0;
	while (t < (n - 1) && src[u])
		dest[t++] = src[u++];
	dest[t] = '\0';
	while (src[u++])
		++t;
	return (t);
}

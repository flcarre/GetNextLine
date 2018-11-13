/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:11:21 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/08 16:09:28 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	char	*srcc;
	char	*dstc;
	size_t	i;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc < dstc)
		while ((int)(--n) >= 0)
			*(dstc + n) = *(srcc + n);
	else
		while (++i < n)
			*(dstc + i) = *(srcc + i);
	return (dst);
}

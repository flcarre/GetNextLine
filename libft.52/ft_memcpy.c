/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:11:08 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/09 10:29:27 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dest;
	const char *surc;

	dest = dst;
	surc = src;
	while(n)
	{
		*dest++ = *surc++;
		n--;
	}
	return(dst);
}

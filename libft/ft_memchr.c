/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:17:03 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:17:16 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(char *)s == (char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}

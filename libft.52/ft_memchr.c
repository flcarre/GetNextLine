/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:10:59 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 14:11:11 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	while(n)
	{
		if (*(char *)s == (char)c)
			return((void *)s);
		s++;
		n--;
	}
	return(NULL);
}

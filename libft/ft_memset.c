/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:11:27 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 14:11:28 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memset(void *b, int c, size_t n)
{
	char *str;

	str = b;
	while(n)
	{
		*str++ = c;
		n--;
	}
	return(b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:11:04 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/07 14:11:11 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *c1;
	const char *c2;

	c1 = s1;
	c2 = s2;
	while (n)
	{
		if ((char)*c1 != (char)*c2)
			return ((unsigned char)*c1 - (unsigned char)*c2);
		c1++;
		c2++;
		n--;
	}
		return(0);
}

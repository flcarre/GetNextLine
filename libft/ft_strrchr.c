/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:11:54 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:10:45 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char *t;

	t = NULL;
	while (*s)
	{
		if (*(char *)s == (char)c)
			t = (void *)s;
		s++;
	}
	if (c == 0 && *s == '\0')
		return ((char *)s);
	else
		return ((char *)t);
}

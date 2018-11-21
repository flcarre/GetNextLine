/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:12:20 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int n;
	int s;

	n = 0;
	s = 0;
	if (s1 && s2)
	{
		s = ft_strlen(s1);
		while (s)
		{
			if (s1[n] != s2[n])
				return (0);
			n++;
			s--;
		}
		if (s1[n] == 0 && s2[n] == 0)
			return (1);
	}
	return (0);
}

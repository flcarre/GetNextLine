/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:19:29 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/09 16:46:50 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"


static	int		ft_abs(int nb)
{
	return ((nb >= 0) ? nb : -nb);
}

static int size(int nb)
{
		int i;

		i = 0;
		if (nb < 10 && nb >= 0)
			return(1);
		while(nb != 0)
		{
			nb = nb / 10;
			i++;
		}
		return(i);
}

char	*ft_itoa(int n)
{
	int s;
	char *str;
	int		neg;

	neg = (n >= 0) ? 0 : 1;
	s = size(n) + neg;
	if ((str = (char*)malloc(sizeof(*str) * s + 1)) == NULL)
		return (NULL);
	if (neg)
		str[0] = '-';
	str[s] = '\0';
	while(s != 0 + neg)
	{
		str[--s] = (ft_abs(n % 10) + 48);
		n = ft_abs(n / 10);
	}
	return(str);
}

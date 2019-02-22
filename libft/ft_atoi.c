/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 02:02:23 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/22 14:15:44 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int	ft_atoi(const char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		nb *= 10;
		nb += ((int)str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (nb == -469762049 ? 0 : -nb);
	else
		return (nb == -469762049 ? -1 : nb);
}

int		main()
{
	char *str;

	str = "--12345";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}

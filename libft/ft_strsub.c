/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:20:06 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	int				j;
	char			*ret;

	i = 0;
	j = 0;
	if ((ret = malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	if (s)
	{
		while (len)
		{
			while (i < start)
				i++;
			ret[j++] = s[i++];
			len--;
		}
	}
	ret[j] = 0;
	return (ret);
}

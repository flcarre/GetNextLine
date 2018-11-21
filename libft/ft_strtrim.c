/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:06:58 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	ret = NULL;
	if (s)
		n = ft_strlen(s) - 1;
	if (s)
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while ((s[n] == ' ' || s[n] == '\n' || s[n] == '\t') && n > i)
			n--;
		if ((ret = malloc((n - i + 2) * sizeof(char))) == NULL)
			return (NULL);
		while (i <= n)
			ret[j++] = s[i++];
		ret[j] = 0;
	}
	return (ret);
}

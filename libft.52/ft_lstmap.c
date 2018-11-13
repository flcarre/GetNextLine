/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/09 11:17:38 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*result;
	t_list		*list;
	t_list		*new;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = f(lst);
	if (!(result = ft_lstnew(new->content, new->content_size)))
		return (NULL);
	lst = lst->next;
	list = result;
	while (lst)
	{
		new = f(lst);
		if (!(result->next = ft_lstnew(new->content, new->content_size)))
			return (NULL);
		result = result->next;
		lst = lst->next;
	}
	return (list);
}

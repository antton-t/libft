/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:56:41 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/27 13:56:59 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;
	t_list	*tmp;

	list = NULL;
	new = NULL;
	if (!lst || !f)
		return (NULL);
	list = lst;
	while (list->next)
	{
		tmp = ft_lstnew(f(list->content));
		if (tmp)
			ft_lstadd_back(&new, tmp);
		else
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		list = list->next;
	}
	ft_lstadd_back(&new, ft_lstnew(f(list->content)));
	return (new);
}

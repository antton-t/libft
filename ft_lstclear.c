/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:55:58 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/03 11:36:54 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *lst;
	while (tmp)
	{
		tmp1 = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = tmp1;
	}
	*lst = NULL;
}

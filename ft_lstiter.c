/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:57:31 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/03 09:32:12 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;

	tmp = NULL;
	if (lst && f)
	{
		tmp = lst;
		while (tmp->next != NULL)
		{
			f(tmp->content);
			tmp = tmp->next;
		}
		f(tmp->content);
	}
}

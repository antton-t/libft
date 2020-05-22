/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 05:29:40 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/29 19:26:49 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	l = ft_strlen(little);
	while (big[i] && i < len && j < l)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && big[i + j])
			j++;
		i++;
	}
	if (l == 0)
		return ((char*)big);
	if (j == l)
		return ((char*)big + i - 1);
	return (NULL);
}

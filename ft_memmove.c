/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 14:41:42 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/01 04:46:36 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned	char	*ptr_src;
	unsigned	char	*ptr_dst;

	i = 0;
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	if (!ptr_dst && !ptr_src)
		return (NULL);
	if (ptr_src > ptr_dst)
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
		return (dst);
	}
	else
	{
		while (len-- > 0)
			ptr_dst[len] = ptr_src[len];
		return (dst);
	}
}

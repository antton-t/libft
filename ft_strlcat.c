/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 05:35:06 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/01 03:20:44 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	count;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	count = 0;
	if (n <= dest_len)
		return (src_len + n);
	while (src[count] && (count + dest_len + 1) < n)
	{
		dst[dest_len + count] = src[count];
		count++;
	}
	dst[dest_len + count] = '\0';
	return (dest_len + src_len);
}

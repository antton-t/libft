/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 14:27:55 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/01 04:28:58 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr_s;
	unsigned char letter;

	ptr_s = (unsigned char *)s;
	letter = (unsigned char)c;
	while (n--)
	{
		if (*ptr_s == letter)
			return (ptr_s);
		ptr_s++;
	}
	return (NULL);
}

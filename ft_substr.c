/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 22:33:49 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/29 19:29:55 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	char	*ptr_out;

	if (!s || (long int)len < 0)
		return (NULL);
	if (!(out = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ptr_out = out;
	if (ft_strlen(s) > start)
	{
		while (len-- && s[start])
			*ptr_out++ = s[start++];
	}
	*ptr_out = '\0';
	return (out);
}

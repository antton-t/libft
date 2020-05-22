/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 22:06:13 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/01 05:46:06 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*out;
	size_t		lengh;
	size_t		count;

	count = 0;
	lengh = ft_strlen(s);
	if (!(out = (char *)malloc(sizeof(char) * (lengh + 1))))
		return (NULL);
	while (s[count])
	{
		out[count] = s[count];
		count++;
	}
	out[count] = '\0';
	return (out);
}

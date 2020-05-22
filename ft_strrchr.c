/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 05:09:24 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/29 19:21:42 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	letter;
	char	*str1;

	letter = (char)c;
	str1 = (char *)str;
	i = ft_strlen(str1);
	while (i >= 0)
	{
		if (str1[i] == letter)
			return ((char *)str1 + i);
		i--;
	}
	return (NULL);
}

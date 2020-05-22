/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 04:39:00 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/01 05:35:40 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	look;
	int		len_str;
	int		j;

	j = 0;
	len_str = ft_strlen(str);
	look = (char)c;
	while (j <= len_str)
	{
		if (str[j] == look)
			return ((char *)str + j);
		j++;
	}
	return (NULL);
}

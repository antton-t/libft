/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:27:57 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/23 00:30:22 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;

	if (!s1)
		return (NULL);
	start = 0;
	while (ft_isset(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(&s1[start]));
	len = ft_strlen(s1) - 1;
	while (ft_isset(s1[len], set))
		len--;
	return (ft_substr(s1, start, len - start + 1));
}

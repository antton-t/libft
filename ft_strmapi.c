/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:47:16 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/27 07:08:08 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;

	i = 0;
	if (!s)
		return (NULL);
	out = ft_strdup(s);
	if (!out || !f)
		return (NULL);
	while (out[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	return (out);
}

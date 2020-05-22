/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:05:35 by antton-t          #+#    #+#             */
/*   Updated: 2020/05/03 15:05:39 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iintlen(long n)
{
	int				count;

	count = 0;
	if (n == 0)
		return (1);
	count = (n < 0 ? 1 : 0);
	n = (n < 0 ? -n : n);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				sign;
	char			*out;
	int				len;
	unsigned int	nbr;

	sign = (n < 0 ? 1 : 0);
	len = ft_iintlen((long)n);
	nbr = (n < 0 ? -n : n);
	if (!(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	out[len] = '\0';
	len--;
	while (len >= 0)
	{
		out[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (sign == 1)
		out[0] = '-';
	return (out);
}

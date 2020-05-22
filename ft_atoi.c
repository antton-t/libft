/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:00:30 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/29 16:00:32 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int count;
	int sign;
	int nb;

	count = 0;
	sign = 1;
	nb = 0;
	while (nptr[count] == '\t' || nptr[count] == '\n' || nptr[count]
		== '\r' || nptr[count] == '\v' || nptr[count] == '\f' ||
		nptr[count] == ' ')
		count++;
	if (nptr[count] == '+' || nptr[count] == '-')
	{
		if (nptr[count] == '-')
			sign = -1;
		count++;
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		nb = nb * 10 + (nptr[count] - '0');
		count++;
	}
	return (nb * sign);
}

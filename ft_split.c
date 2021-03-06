/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <antton-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:30:09 by antton-t          #+#    #+#             */
/*   Updated: 2020/04/29 19:44:30 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_split(char s, char c)
{
	if (s == c)
		return (1);
	if (s == '\0')
		return (1);
	return (0);
}

static int	ft_counter(char *str, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_split(str[i + 1], c) == 1
			&& is_split(str[i], c) == 0)
			word++;
		i++;
	}
	return (word);
}

static void	ft_cytab(char *dest, char *from, char c)
{
	int	i;

	i = 0;
	while (is_split(from[i], c) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	ft_writing(char **split, char *str, char c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_split(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (is_split(str[i + j], c) == 0)
				j++;
			if (!(split[word] = (char*)malloc(sizeof(char) * (j + 1))))
			{
				ft_free_split(split, word);
				return ;
			}
			ft_cytab(split[word], str + i, c);
			i += j;
			word++;
		}
	}
}

char		**ft_split(char const *s, char c)
{
	char	**out;
	int		word;

	if (!s)
		return (NULL);
	word = ft_counter((char *)s, c);
	if (!(out = (char **)malloc(sizeof(char*) * (word + 1))))
		return (NULL);
	out[word] = 0;
	ft_writing(out, (char *)s, c);
	return (out);
}

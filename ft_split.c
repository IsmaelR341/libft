/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:34:23 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:42:00 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
		else
			i++;
	}
	return (count);
}

static	char	**free_memory(char **str, unsigned int i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (0);
}

static char	**limit_word(char *aux, char **str, char c)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	while (*aux)
	{
		if (*aux != c)
		{
			j = 0;
			while (*aux && *aux != c)
			{
				j++;
				aux++;
			}
			str[i++] = ft_substr(aux - j, 0, j);
			if (!str[i - 1])
				return (free_memory(str, i));
		}
		else
			aux++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	char			*aux;

	aux = (char *)s;
	str = (char **)ft_calloc(count_words(aux, c) + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (limit_word(aux, str, c));
}

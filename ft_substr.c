/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:47:21 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:43:05 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	startcast;
	size_t	maxlen;

	startcast = (size_t)start;
	maxlen = 0;
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) < startcast)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	substring = (char *)malloc((len + 1) * (sizeof(char)));
	if (substring == NULL)
		return (NULL);
	while (maxlen < len)
	{
		substring[maxlen] = s[startcast];
			maxlen++;
			startcast++;
	}
	substring[maxlen] = '\0';
	return (substring);
}

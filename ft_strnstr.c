/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:04:40 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:42:55 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (j < len - i && haystack[i + j] && needle[j]
			&& (needle[j] == haystack[i + j]))
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

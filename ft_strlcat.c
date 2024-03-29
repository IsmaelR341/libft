/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:14:00 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:42:17 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;

	i = 0;
	j = 0;
	lendst = ft_strlen(dst);
	if (lendst < (dsize - 1) && dsize > 0)
	{
		while (dst[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0' && j < dsize - lendst - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (dsize < lendst)
		lendst = dsize;
	return (lendst + ft_strlen(src));
}

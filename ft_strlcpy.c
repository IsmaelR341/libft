/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:15:24 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:42:23 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize > 0)
	{
		while (i < (dsize -1) && src[i] != '\0')
		{
				dst[i] = src[i];
				i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

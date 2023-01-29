/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:31:58 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:43:42 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*scpy;

	scpy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (scpy[i] == (unsigned char)c)
			return ((void *)&scpy[i]);
		i++;
	}
	return (NULL);
}

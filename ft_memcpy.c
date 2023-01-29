/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:45:57 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:41:31 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destcpy;
	char	*srccpy;

	destcpy = (char *) dest;
	srccpy = (char *) src;
	i = 0;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (dest = destcpy);
}

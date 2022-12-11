/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:24:51 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/08 20:20:19 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstcpy;
	char	*srccpy;
	size_t	i;

	dstcpy = (char *) dst;
	srccpy = (char *) src;
	i = 0;
	if (dst == src)
	{
		return (dst);
	}
	if (src < dst)
	{
		while (len-- > 0)
			dstcpy[len] = srccpy[len];
		return (dstcpy);
	}
	while (i < len)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}	
	return (dst);
}

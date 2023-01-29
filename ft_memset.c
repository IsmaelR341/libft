/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:37:15 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:48:39 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*scpy;
	size_t	i;

	scpy = (char *)s;
	i = 0;
	while (i < len)
	{
		scpy[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

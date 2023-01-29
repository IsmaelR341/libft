/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:37:25 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:42:10 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// int	ft_toupperr(int c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c = (c - 32);
// 	printf("\n%c", c);
// 	return (c);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

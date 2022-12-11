/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:11:27 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/08 13:59:24 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int	main(void)
// {
// 	char	s[]= "Holas paco";
// 	int		c;
// 	size_t	n;

// 	c = '\0';
// 	n = 4;
// 	printf("\n%s", s);
// 	ft_bzero(s, n);
// 	printf("\n%c", s[3]);
// 	return (0);
// }

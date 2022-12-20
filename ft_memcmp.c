/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:20:28 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/20 20:37:57 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1cpy;
	const unsigned char	*s2cpy;

	i = 0;
	s1cpy = (const unsigned char *)s1;
	s2cpy = (const unsigned char *)s2;
	while (i < n)
	{
		if (*s1cpy != *s2cpy)
			return (*s1cpy - *s2cpy);
		i++;
		s1cpy++;
		s2cpy++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "1112";
// 	char	s2[] = "1111";
// 	size_t		a;
// 	a = 4;
// 	printf("s1 :%s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("%zu\n", a);
// 	printf("%i", ft_memcmp(s1, s2, a));
// 	return(0);
// }
// //me gustaría ver la diferencia específica con strncmp
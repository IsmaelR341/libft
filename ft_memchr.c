/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:31:58 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/20 18:09:48 by ireal-po         ###   ########.fr       */
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

//L.25; devuelce puntero de tipo void al byte que concuerda con int c casteado
//L.28; devuelve NULL si el caracer no está en el area de memoria especificada
// int	main(void)
// {
// 	char	s1[] = "Como el mar; azul";
// 	size_t		a;
// 	int			b;
// 	a = 17;
// 	b = 'm';
// 	printf("s1:%s\n", s1);
// 	printf("%zu\n", a);
// 	printf("%s", ft_memchr(s1, b, a));
// 	return(0);
// }
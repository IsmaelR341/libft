/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:37:25 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/05 19:17:36 by ireal-po         ###   ########.fr       */
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

// int main()
// {
// 	char str[] = "abcdefgh";
// 	int	(*f)(int);
// 	f = &ft_toupperr;
// 	ft_striteri(str, f);
// 	printf("Nueva cadena: %s\n", str);
// 	return (0);
// }
//Itera a través de cada carácter de una cadena y ejecuta
//una función en cada uno de llos, proporciona el índice
//del carácter en la cadena, no modifica la cadena original,
//no devuelve nada
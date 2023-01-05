/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:37:15 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/23 16:45:59 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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

// int	main(void)
// {
// 	char	s[]= "Holas paco";
// 	int		c;
// 	size_t	n;
// 	c = 'f';
// 	n = 5;
// 	printf("\n%s", s);
// 	ft_memset(s, c, n);
// 	printf("\n%s", s);
// 	return (0);
// }
//parametros -> s es el string de char ( 1pos)  que tengo q modificar
// añadiendole el caracter c que tengo q castear  ya que recibo un int
// y quiero meterlo en un string de char y len es el numero de 
//carceteres c que tengo q meter
//linea 17 creo un puntero a char ya que void * indica que puede ser 
//cualquier cosa
// y casteamos el tipo que ncesito  en la linea 20

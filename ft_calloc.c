/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:34:13 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/23 17:27:48 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	c = malloc(count * size);
	if (c == NULL)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}

// int main()
// {
// 	size_t c;
// 	size_t s;
// 	int	i;
// 	char *str;
// 	c = 10;
// 	s = 4;
// 	str = (char *)ft_calloc(c,s);
// 	i = 0;
// 	while(i < c*s)
// 	{
// 		str[i] = 'c';
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	printf("\nNúmero total de bytes: %i", (int)strlen(str));
// 	return(0);
// }
//F.20 con esa fila retornamos NULL en el caso de que segmentation faul,
// por ej, si solicitamos 2tb nos dar error en el caso de que el sistma
// no dispone de esos recursos.
//con la funcion ft_bzero vamos rellenando con 0, los bytes creados.
//malloc permite reservar memoria de un tamaño dado
//retorna direccion de la porcion de memoria que reservo (retorna puntero)
//calloc garantiza que cada byte de memoria reservada viene en 0
//en string ahorra pasos ya que te lo da con el ultimo caracter en 0.
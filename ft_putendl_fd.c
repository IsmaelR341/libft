/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:39:05 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/22 12:55:20 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write(fd, "\n", 1);
}

//Escribe una cadena y una línea a un fd de un archivo dado(detras del string)
//fd -> sobre el que vamos a sobreescribir. Argumentos que toma:
//1 - Const Char *S: puntero a la cadena que se va a escribir.
//2 - int fd: el descriptor de archivo al que se escribira la cadena.
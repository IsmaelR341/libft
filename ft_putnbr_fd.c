/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:10:01 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/22 13:46:36 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd((i % 10) + '0', fd);
	}
	if (i <= 9)
	{
		ft_putchar_fd(i + '0', fd);
	}
}

//L.23: dsp de imprimir '-', convertimos el nº en positivo.
// Escribe un nº entero dado a un descriptor de archivo dedo,
// toma 2 argumentos:
// 1- int n: El nº entero que se va escribir.
// 2- int fd: El descriptor de archivo al que se escribirá el numero.
// Convierte el numero entero dado auna caadena y luego escribe esa cadena al 
// descriptor de un archivo dado.
// Si el nº es -, se escribira un  signo - antes del nº.
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:28:36 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/05 19:52:40 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int main(int argc, char** argv)
// {
// 	int fd = open("salida.txt", O_WRONLY | O_CREAT, 0644);
// 	if (fd < 0)
// 	{
// 		perror("Error al abrir archivo");
// 		return (1);
// 	}
// 	if (fr_putchar_fd('A', fd) == EOF)
// 	{
// 		perror("Error al escribir el archivo");
// 		return (1);
// 	}
// 	close(fd);
// 	return (0);
// }
//L. 22 //Abre el archivo "salida.txt" en modo escritura
//L. 23// Verifica que el archivo se abra correctamente
//L. 28// Escribe el carácter 'A' al archivo
//L.33// Cierra el archivo
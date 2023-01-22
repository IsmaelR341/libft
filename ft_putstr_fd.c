/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:59:08 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/22 12:42:20 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write (fd, &s[i], 1);
		i++;
	}
}

// Envía s al file descriptor recibido como parámetro, escribe una cadena de
// carácteres e un archivo o recurso de E/S especificado como fd.
// S -> puntero a la cadena de caracteres a escribir .
// fd -> recurso o archivo de E/S donde se escribirá la cadena
// No devuelve nada
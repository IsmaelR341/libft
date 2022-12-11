/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:46:57 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/11 17:05:14 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <stdio.h>
# include <ctype.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t len);
/*escribe el carácter c, n veces en el string*/
size_t	ft_strlen(const char *s);
/*cuenta número de carácteres de un string*/
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*Copia ncaracteres desde el área de almacenamiento de lacadena1cadena2
área dealmacenamiento*/
void	*ft_memmove(void *dst, const void *src, size_t len);
/* Copia los primeros n caracteres del objeto apuntado por s2 al
objeto apuntado por s1, sin superpuestos */
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dsize);
/*Copio string src a dst y además retorna nº caracteres de src*/
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize);
/*esta funcion me retorna numero de caracteres que existen en una 
concatenacion(juntar dos cadenas)*/
int		ft_toupper(int c);
/*Convierte c en mayuscula*/

#endif

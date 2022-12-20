/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:46:57 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/20 16:19:17 by ireal-po         ###   ########.fr       */
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
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
/*Copio string src a dst y además retorna nº caracteres de src*/
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
/*esta funcion me retorna numero de caracteres que existen en una 
concatenacion(juntar dos cadenas)*/
int		ft_toupper(int c);
/*Convierte c en mayuscula*/
int		ft_tolower(int c);
/*Convierte c en minuscula*/
char	*ft_strchr(const char *s, int c);
/*devuelve puntero a la ubicación del carácter buscado, Null si no encuentra*/
char	*ft_strrchr(const char *s, int c);
/*Devuelve un ptero a la ult ocurrencia del caracter c en la cadena s*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*Compara n carácter de S1 con S2, ve si S1 (>< ó =) s2*/
//void	*ft_memchr(const void *s, int c, size_t n);
/*localiza la primera aparición de c (convertida a un unsigned char)
en la cadena s, devuelve puntero al byte localizado*/

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:46:57 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/22 12:56:58 by ireal-po         ###   ########.fr       */
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
/*escribe el carácter c, n veces en el string*/
void	*ft_memset(void *s, int c, size_t len);
/*cuenta número de carácteres de un string*/
size_t	ft_strlen(const char *s);
/*escribe el carácter 0, n veces en el string*/
void	ft_bzero(void *s, size_t n);
/*Copia ncaracteres desde el área de almacenamiento de lacadena1cadena2
área dealmacenamiento*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/* Copia los primeros n caracteres del objeto apuntado por s2 al
objeto apuntado por s1, sin superpuestos */
void	*ft_memmove(void *dst, const void *src, size_t len);
/*Copio string src a dst y además retorna nº caracteres de src*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
/*esta funcion me retorna numero de caracteres que existen en una 
concatenacion(juntar dos cadenas)*/
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
/*Convierte c en mayuscula*/
int		ft_toupper(int c);
/*Convierte c en minuscula*/
int		ft_tolower(int c);
/*devuelve puntero a la ubicación del carácter buscado, Null si no encuentra*/
char	*ft_strchr(const char *s, int c);
/*Devuelve un ptero a la ult ocurrencia del caracter c en la cadena s*/
char	*ft_strrchr(const char *s, int c);
/*Compara n carácter de S1 con S2, ve si S1 (>< ó =) s2*/
//void	*ft_memchr(const void *s, int c, size_t n);
/*localiza la primera aparición de c (convertida a un unsigned char)
en la cadena s, devuelve puntero al byte localizado*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*Explora n bytes iniciales de la zona de memoria apuntada
por s en busca de la primera c. Devuelve puntero al byte q concuerda, o NULL*/
void	*ft_memchr(const void *s, int c, size_t n);
/*Compara los primeros n bytes de las memorias de s1 y s2*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*localiza la primera aparición de la aguja de cadena terminada en cero en el
 pajar de cadenas pajar de cadenas, donde no se buscan más de len caracteres*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/*Devuelve el entero de un string, salta espacios, tiene en cuenta negativos
para dar el signo correcto al int que se genera*/
int		ft_atoi(const char *str);
/*reserva memoria de un tamaño dado retorna direccion de la porcion de memoria,
esa porción viene relleno de 0*/
void	*ft_calloc(size_t count, size_t size);
/*Copia cadenas pero realiza la asignación de memoria(malloc) y verifica*/
char	*ft_strdup(const char *s);
/*Crea una substring de un string limitando donde empieza y donde acaba*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/*Concateno S1 y s2 y devuelve el resultado*/
char	*ft_strjoin(char const *s1, char const *s2);
/*Crea una substring limpiando caracteres de la string de izquieda a derecha
y de derecha a izquierda*/
char	*ft_strtrim(char const *s1, char const *set);
/*El numero entero, aun negativo, que le pasa main, es convertido a cadena*/
char	*ft_itoa(int n);
/*Devuelve un puntero a una nueva cadena de char con caracteres modificados*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*itera a traves de una cadena de char, ejecuta una funcion en cada uno de
ellos y proporciona el indice del caracter en la cadena, no devuelve nada*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*Escribe un carácter en un archivo de E/S especificado por un file descriptor*/
void	ft_putchar_fd(char c, int fd);
/*Escribe cadena de caracteres en un recurso de E/S especificado por fd*/
void	ft_putstr_fd(char *s, int fd);
/*Escribe una cadena y una línea a un fd de un archivo dado(detras del string)*/
void	ft_putendl_fd(char *s, int fd);

#endif
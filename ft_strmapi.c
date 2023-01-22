/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:53:06 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/05 17:36:15 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	my_func(unsigned int index, char c)
// {
// 	return (c + index);	
// }
// int main()
// {
// 	char str[] = "abcdefgh";
// 	char* newstr = ft_strmapi(str, my_func);
// 	printf("Nueva cadena: %s\n", newstr);
// 	return (0);
// }
//L.25: *s = una cadena de caracteres, (*f)(i, char) = una funcion
// se aplica a cada caracgter de la cadena s, se le pasa el indice del
//caracter dentro de la cadena y el propio caracter de la cadena.
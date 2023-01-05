/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:47:21 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/28 14:14:50 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	startcast;
	size_t	maxlen;

	startcast = (size_t)start;
	maxlen = 0;
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) < startcast)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	substring = (char *)malloc((len + 1) * (sizeof(char)));
	if (substring == NULL)
		return (NULL);
	while (maxlen < len)
	{
		substring[maxlen] = s[startcast];
			maxlen++;
			startcast++;
	}
	substring[maxlen] = '\0';
	return (substring);
}

// int main()
// {
// 	char str[] = "Hola Manuel, Como estass?";
// 	int	empieza;
// 	size_t acaba;
// 	empieza = 20;
// 	acaba = 25;
// 	printf("La nueva substring: %s", ft_substr(str, empieza, acaba));
// 	return (0);
// }
//L.24. Si el numero de bytes de s = 0, retorna una copia de string nulo
//L.26. Si el numero de bytes de s < que el byte dnd empieza substring,
//retorna una copia de string nulo.
//L.27;Si numero de bytes de s - byte donde empieza la substring es 
//menor que len reducimos tamaño máximo de la substring.
//L.31. Si no hay recursos suficientes devuelve NULL.
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:04:40 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/22 13:18:30 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (j < len - i && haystack[i + j] && needle[j]
			&& (needle[j] == haystack[i + j]))
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	haystack[] = "Carolina. Hola caracola";
// 	char	needle[] = "ca";
// 	size_t		len;
// 	len = 20;
// 	printf("haystack :%s\n", haystack);
// 	printf("needle: %s\n", needle);
// 	printf("%zu\n", len);
// 	printf("%s", ft_strnstr(haystack, needle, len));
// 	return(0);
// }
//L.21, si needle(aguja) = 0 (cadena pvacía), se devuelbe haystack
//L.23. j = contador de needle
//L.26 avanza haystak hasta que hay una coincidencia, luego
//verifica si los siguientes de needle siguen coincidiendo
//L.31. es un descarte, si j no es igual al ft_strlen de needle,
//entonces sigue buscando en el pajar (haystack)
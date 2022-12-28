/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:14:41 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/28 19:09:37 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (i < end && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr (s1, i, end - i));
}

// int main()
// {
// 	char str[] = "15613Había645una barca946";
// 	char set[] = "0123456789";
// 	printf("Nuevo string: %s", ft_strtrim(str, set));
// 	return (0);
// }
//Del string madre creamos una substring, limpiando los caracteres
//que nos manda set, tanto por la izquierda como por la derecha.
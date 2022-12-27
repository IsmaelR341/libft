/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:35:07 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/27 11:16:29 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpys;
	char	*tenedor;

	cpys = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (cpys == NULL)
		return (NULL);
	tenedor = (char *)s;
	ft_strlcpy(cpys, tenedor, ft_strlen(s)+1);
	return (cpys);
}

// int	main(void)
// {
// 	char	origen[] = "Fotocopia";
// 	printf("sin tener en cuenta la funcion strdup: %s\n", origen);
// 	printf("Tras hacer la función strdup: %s", ft_strdup(origen));
// 	return(0);
// }
//Fila 20. malloc(N, sizeof(char)) donde, Malloc reserva memoria,
// para N lugares, de size tamaño)
//F24.size_t ft_strlcpy(char dst, const char src, size_t dsize) 
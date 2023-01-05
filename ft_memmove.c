/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:24:51 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/27 17:09:52 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstcpy;
	char	*srccpy;
	size_t	i;

	dstcpy = (char *) dst;
	srccpy = (char *) src;
	i = 0;
	if (dst == src)
	{
		return (dst);
	}
	if (src < dst)
	{
		while (len-- > 0)
			dstcpy[len] = srccpy[len];
		return (dstcpy);
	}
	while (i < len)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}	
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "Hola paco";
// 	char	dst[] = "barba";
// 	size_t	n;
// 	n = 15;
// 	ft_memmove(dst, src, n);
// 	printf("dst = %s\nsrc = %s\nn = %ld\n", dst, src, n);
// 	return (0);	
// }
//Aquí hay que tener encuenta que hay 4 formas en las que se encuentra
//los strings en destino y origen en la memoria, 
//Puede que origen y destino se solapen parcialmente, si destino está mas
// a la izq , o que origen esté más a la izquierda.
//que se encuentren distantes sin estar solapadas, o que dest=src en totalidad
//L.36.hay que sanitizar el codigo para que si se solapan parcialmente a la hora
// de copiar carácteres no haya errores por copias de valores.
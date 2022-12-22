/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:24:42 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/22 15:37:51 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	aux;
	int	i;

	sign = 1;
	aux = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		aux = (str[i] - '0') + (aux * 10);
		i++;
	}
	return (aux * sign);
}

// int	main(void)
// {
// 	char *i = "  -568132";

// 	printf("el entero es %i\n", ft_atoi(i));
// 	return (0);
// }
// //Devuelve el entero de un string, salta espacios, tiene en cuenta negativos
//para dar el signo correcto al int que se genera.
//L.26, tipo de espacios, tabulador, nueva linea..
//Este atoi es simple, no canaliza más de un signo negativo.
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:15:14 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/20 16:17:20 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "aaaZ";
// 	char	s2[] = "aaaa";
// 	size_t		a;
// 	a = 4;
// 	printf("s1 :%s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("%zu\n", a);
// 	printf("%i", ft_strncmp(s1, s2, a));
// 	return(0);
// }
//cuando n sea distinto en S1 de S2, nos da el rdo y termina la funcion
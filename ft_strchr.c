/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:50:15 by ireal-po          #+#    #+#             */
/*   Updated: 2022/12/18 19:26:13 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*scpy;

	scpy = (char *)s;
	if ((char)c == '\0')
		return (&(scpy[ft_strlen(scpy)]));
	while (*scpy != '\0')
	{
		if (*scpy == (char)c)
			return (scpy);
		scpy++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "Hola Paco como estas";
// 	int		a;
// 	a = 'x';
// 	printf("%c\n", (char)a);
// 	printf("%s", ft_strchr(s, (int)'a'));
// 	return(0);
// }
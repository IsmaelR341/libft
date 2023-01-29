/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:08:30 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:42:58 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		lastc;
	int		i;
	char	*scpy;

	i = 0;
	lastc = -1;
	scpy = (char *)s;
	if ((char)c == '\0')
		return (&(scpy[ft_strlen(scpy)]));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			lastc = i;
		i++;
	}
	if (lastc == -1)
		return (NULL);
	return (&scpy[lastc]);
}

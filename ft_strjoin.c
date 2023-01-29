/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:29:47 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:47:51 by ireal-po         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	longitud;
	size_t	j;
	size_t	i;

	longitud = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(longitud * sizeof(char));
	j = 0;
	i = ft_strlen(s1);
	if (s3 == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		s3[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	return (s3);
}

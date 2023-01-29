/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ireal-po <ireal-po@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:35:07 by ireal-po          #+#    #+#             */
/*   Updated: 2023/01/29 17:42:06 by ireal-po         ###   ########.fr       */
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

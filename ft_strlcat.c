/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:45:09 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/31 11:36:33 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dst && !size)
		return (0);
	i = 0;
	j = 0;
	while (*(dst + i) && i < size)
		i++;
	while (*(src + j) && (i + j + 1) < size)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	if (i != size)
		*(dst + i + j) = '\0';
	return (i + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:45:09 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/27 14:47:33 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dst && !dstsize)
		return (0);
	i = 0;
	j = 0;
	while (*(dst + i) && i < dstsize)
		i++;
	while (*(src + j) && (i + j + 1) < dstsize)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	if (i != dstsize)
		*(dst + i + j) = '\0';
	return (i + ft_strlen(src));
}

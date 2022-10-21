/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:00:02 by jquintin          #+#    #+#             */
/*   Updated: 2022/09/15 17:31:26 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*(src + i) && dstsize && i < dstsize - 1)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (dstsize - i != 0)
		*(dst + i) = '\0';
	return (ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:00:40 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/26 18:34:52 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp[len];
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(tmp + i) = *((char *)src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*((char *)dst + i) = *(tmp + i);
		i++;
	}
	return (dst);
}

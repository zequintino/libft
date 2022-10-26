/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:15:39 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/26 17:25:38 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	while (++i < n)
		*((char *)dst + i) = *((const char *)src + i);
	return (dst);
}

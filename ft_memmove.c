/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:00:40 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/25 17:05:23 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	size_t	i;

	// tmp = (char *)malloc(sizeof(char) * len);
	if (!dst || !tmp)
		return (NULL);
	i = -1;
	while (++i < len)
		*(tmp + i) = *(const char *)src++;
	i = -1;
	while (++i < len)
		*((char *)dst + i) = *(tmp + i);
	// free(tmp);
	return (dst);
}

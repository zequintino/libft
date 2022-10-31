/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:00:40 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/31 11:34:15 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	if ((char *)dest > (char *)src)
		while (n-- > 0)
			*((char *)dest + n) = *((char *)src + n);
	else
		while (++i < n)
			*((char *)dest + i) = *((char *)src + i);
	return (dest);
}

/* void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * n);
	if (!tmp)
		return (NULL);
	i = -1;
	while (++i < n)
		*(tmp + i) = *((char *)src + i);
	i = -1;
	while (++i < n)
		*((char *)dest + i) = *((char *)src + i);
	free(tmp);
	return (dest);
} */

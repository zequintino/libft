/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:00:40 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/28 14:15:35 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	if ((char *)dst > (char *)src)
		while (len-- > 0)
			*((char *)dst + len) = *((char *)src + len);
	else
		while (++i < len)
			*((char *)dst + i) = *((char *)src + i);
	return (dst);
}

/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	i = -1;
	if (tmp_dst > tmp_src)
		while (len-- > 0)
			*(tmp_dst + len) = *(tmp_src + len);
	else
		while (++i < len)
			*(tmp_dst + i) = *(tmp_src + i);
	return (dst);
} */

/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	i = -1;
	while (++i < len)
		*(tmp + i) = *((char *)src + i);
	i = -1;
	while (++i < len)
		*((char *)dst + i) = *((char *)src + i);
	free(tmp);
	return (dst);
} */

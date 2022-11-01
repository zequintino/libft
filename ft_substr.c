/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:42:00 by jquintin          #+#    #+#             */
/*   Updated: 2022/11/01 15:55:24 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (len > ((ft_strlen(s) + 1) - start))
	{
		len = (ft_strlen(s)) - start;
		subs = (char *)malloc(sizeof(char) * (len + 1));
		if (!subs)
			return (NULL);
	}
	else
		subs = (char *)malloc(sizeof(char) * len + 1);
	if (!subs)
		return (NULL);
	i = -1;
	while (++i < len)
		*(subs + i) = *(s + start + i);
	*(subs + i) = '\0';
	return (subs);
}

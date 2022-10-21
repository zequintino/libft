/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:42:00 by jquintin          #+#    #+#             */
/*   Updated: 2022/09/16 14:57:32 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	if (!*s && !len)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		subs = (char *)malloc(sizeof(char) * 1);
		if (!subs)
			return (NULL);
		*subs = '\0';
		return (subs);
	}
	subs = (char *)malloc(sizeof(char) * len + 1);
	if (!subs)
		return (NULL);
	i = -1;
	while (++i < len)
		*(subs + i) = *(s + start + i);
	*(subs + i) = '\0';
	return (subs);
}

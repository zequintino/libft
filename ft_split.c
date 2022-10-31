/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:23:35 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/31 15:18:17 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_substr_count(const char *s, char c);
static char		*ft_cpyalloc(const char *src, size_t len);

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	str_i;
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_substr_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	str_i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && (s[i] != c))
			i++;
		if (j < i)
			split[str_i++] = ft_cpyalloc(&s[j], (i - j) + 1);
	}
	split[str_i] = NULL;
	return (split);
}

static size_t	ft_substr_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && (*s != c))
			s++;
	}
	return (count);
}

static char	*ft_cpyalloc(const char *src, size_t len)
{
	char	*dst;

	dst = (char *)malloc(len * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, src, len);
	return (dst);
}

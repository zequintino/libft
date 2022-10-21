/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:15:11 by jquintin          #+#    #+#             */
/*   Updated: 2022/09/16 14:25:11 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*int_to_char(char *s, int n);

char	*ft_itoa(int n)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 1);
	if (!s)
		return (NULL);
	if (n == INT_MIN)
	{
		s = (char *)malloc(sizeof(char) * 12);
		if (!s)
			return (NULL);
		ft_memcpy(s, "-2147483648", 12);
		return (s);
	}
	else if (n < 0)
	{
		s = (char *)malloc(sizeof(char) * 2);
		if (!s)
			return (NULL);
		*s = '-';
		*(s + 1) = '\0';
		n *= -1;
	}
	else
		*s = '\0';
	return (s = ft_strjoin(s, int_to_char(s, n)));
}

static char	*int_to_char(char *s, int n)
{
	if (n > 9)
		s = ft_strjoin(int_to_char(s, n / 10), int_to_char(s, n % 10));
	else
	{
		s = (char *)malloc(sizeof(char) * 2);
		if (!s)
			return (NULL);
		*s = n + '0';
		*(s + 1) = '\0';
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:21:44 by jquintin          #+#    #+#             */
/*   Updated: 2022/11/01 13:43:58 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static int	s_len(int n);

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = s_len(n);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		*s = '-';
	}
	*(s + (len + 1)) = '\0';
	while (n > 9)
	{
		*(s + len--) = (n % 10) + '0';
		n /= 10;
	}
	*(s + len) = n + '0';
	return (s);
}

static int	s_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += 1;
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		return (len += 1);
	while (n > 9)
	{
		n /= 10;
		len += 1;
	}
	return (len);
}
 */

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

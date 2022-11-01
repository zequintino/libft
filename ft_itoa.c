/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:21:44 by jquintin          #+#    #+#             */
/*   Updated: 2022/11/01 15:07:29 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_len(int n);

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
	s[len] = '\0';
	if (n < 0)
	{
		n *= -1;
		*s = '-';
	}
	while (n > 9)
	{
		s[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (n >= 0 && n <= 9)
		s[len - 1] = n + '0';
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
	while (n > 9)
	{
		n /= 10;
		len += 1;
	}
	if (n >= 0 && n <= 9)
		return (len + 1);
	return (len);
}

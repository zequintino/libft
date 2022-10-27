/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:20:27 by jquintin          #+#    #+#             */
/*   Updated: 2022/10/27 18:27:48 by jquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	n;
	int			sign;

	sign = 1;
	n = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while ((*str >= '0' && *str <= '9'))
	{
		n = n * 10 + (*str++ - '0');
		if (n > 2147483648)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
	}
	return (n * sign);
}

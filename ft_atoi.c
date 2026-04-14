/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:01:27 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/14 19:44:31 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	if (*nptr == ' ' || *nptr == '\t' || *nptr == '\f' || *nptr == '\r'
		|| *nptr == '\n' || *nptr == '\v')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*(nptr++) == '-')
			sign *= -1;
	}
	while (ft_isdigit(*nptr) != 0)
	{
		number = number * 10 + (*(nptr++) - '0');
	}
	return (sign * number);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_atoi("-2147483648"));
	printf("%i\n", ft_atoi("212121abcd"));
	printf("%i\n", ft_atoi(" -21rjedkfj"));
	printf("%i\n", ft_atoi("-2147483647"));
	printf("%i\n", ft_atoi("  -2"));
	printf("%i\n", ft_atoi("-+4"));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:25:31 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/17 13:14:20 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little[0] == '\0')
		return ((char *) big);
	while (*big)
	{
		if (ft_strncmp(big, little, len) == 0)
			return ((char *) big);
		++big;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*big = "hello world";
	const char	*little = " world";
	printf("%p\n", big);
	printf("%p\n", ft_strnstr(big, little, ft_strlen(big)));
	return (0);
}*/

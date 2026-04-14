/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:05:03 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/14 17:17:59 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
size_t	ft_strlen(const char *str)
{
	size_t	len;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	
}

#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	dest1[50] = "hello";
	char	src1[30] = "world";
	char	dest2[50] = "hello";
	char	src2[30] = "world";

	printf("%zu %s", strlcat(dest1, src1, 6), dest1);
	printf("%zu %s", ft_strlcat(dest2, src2, 6), dest2);
}

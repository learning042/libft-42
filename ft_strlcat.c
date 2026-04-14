/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:05:03 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/14 22:57:01 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;
	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;
	size_t	dsize_cpy;
	size_t	ssize;
	
	i = 0;
	dsize = ft_strlen(dst) + 1;
	ssize = ft_strlen(src) + 1;
	dsize_cpy = dsize;
	if (dsize >= size)
		return (dsize + ssize - 2);
	while (dsize_cpy < size && i < ssize - 1)
	{
		dst[dsize_cpy - 1] = src[i];
		++dsize_cpy;
		++i;
	}
	dst[dsize_cpy - 1] = '\0';
	return (dsize + ssize - 2);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	dest1[50] = "hello";
	char	src1[30] = "world";
	char	dest2[50] = "hello";
	char	src2[30] = "world";

	printf("%zu %s\n", strlcat(dest1, src1, 12), dest1);
	printf("%zu %s\n", ft_strlcat(dest2, src2, 12), dest2);
}

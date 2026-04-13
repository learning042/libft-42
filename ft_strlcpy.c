/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 22:16:38 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/13 22:55:29 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dsize > 0)
	{
		while(dsize-- > 1 && *src != '\0')
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (len_src);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "hello";
	char	dst[4];
	printf("%i %s", ft_strlcpy(dst, src, 4), dst);
}
*/	

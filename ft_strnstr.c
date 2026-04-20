/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:25:31 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/20 17:46:25 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	len_little = ft_strlen(little);
	if (!len_little)
		return ((char *) big);
	while (len-- >= len_little && *big)
	{
		if (!ft_strncmp(big, little, len_little))
			return ((char *) big);
		++big;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*largestring = "Foo Bar	Baz";
	const char	*smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 5);
	printf("%p\n", ptr);
	return (0);
}
*/

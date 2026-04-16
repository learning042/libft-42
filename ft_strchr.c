/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:25:27 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/16 14:59:12 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) s + i);
		++i;
	}
	if (c == '\0')
		return ((char *) s + i);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	s[] = "hello";
	printf("%p\n", s);
	printf("%p\n", ft_strchr(s, 'e'));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:23:53 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/19 21:20:04 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;	

	i = 0;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *s = "hello";
	char		*sub;
	sub = ft_substr(s, 3, 2);
	printf("%s\n", sub);
	return (0);
}
*/

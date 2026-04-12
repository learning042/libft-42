/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 00:30:27 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/12 00:34:12 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[i + j] = s2[i];
		i++;
	}
	s1[i + j] = '\0';
	return (s1);
}
/*#include <stdio.h>
int	main(void)
{
	const char	*s2 = " world";
	char	s1[12] = "hello";
	ft_strcat(s1, s2);
	printf("%s\n", s1);
	return (0);
}
*/

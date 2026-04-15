/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:08:37 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/15 14:08:10 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_conc;

	s_conc = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s_conc == NULL)
		return (NULL);
	ft_strcat(s_conc, s1);
	ft_strcat(s_conc, s2);
	return (s_conc);
}
#include <stdio.h>
int	main(void)
{
	char const	*s1 = "hello";
	char const	*s2 = " world";
	char const	*s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	return (0);
}

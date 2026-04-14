/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:25:31 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/14 19:38:00 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little[0] == '\0')
		return (big);
	while (*big)
	{
		if (ft_strncmp(big, little, len) == 0)
			return (little);
		++big;
	}
	return (NULL);
}

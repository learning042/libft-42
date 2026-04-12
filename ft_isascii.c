/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:27:06 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/12 16:36:57 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%i\n", isascii(-1));
	printf("%i\n", ft_isascii(-1));
	printf("%i\n", isascii(128));
	printf("%i\n", ft_isascii(128));
	printf("%i\n", isascii(50));
	printf("%i\n", ft_isascii(50));
	return (0);
}

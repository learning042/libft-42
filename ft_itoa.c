/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:01:13 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/16 13:26:27 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_digits(int	num)
{
	if (num < 0)
		num *= -1;
	if (num >= 0 && num <= 9)
		return (1);
	return (1 + ft_count_digits(num / 10));
}
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*num;
	int		mem_alloc;
	int		sign;

	sign = 1;
	mem_alloc = ft_count_digits(n) + 1;
	if (n < 0)
	{
		++mem_alloc;
		sign = -1;
		n *= -1;
	}
	num = malloc(mem_alloc);
	if (num == NULL)
		return (NULL);
	num[mem_alloc] = '\0';
	while (mem_alloc-- && n != 0)
	{
		num[mem_alloc - 1] = n % 10 + '0';
		n /= 10;
	}
	if (sign == -1)
		num[0] = '-';
	return (num);
}
/*		
#include <stdio.h>
int	main(void)
{
	int		n = -5005;
	char	*num = ft_itoa(n);
	printf("%s\n", num);
	free(num);
	return (0);
}
*/

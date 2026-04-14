/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:43:46 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/13 12:02:13 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;

	str = s;
	i = 0;
	while (i < n)
	{
		(unsigned char str)[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	arr[] = {1, 2, 3};
	printf("Antes: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}
	ft_bzero(arr, 12);
	printf("Depois: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}
}
*/	

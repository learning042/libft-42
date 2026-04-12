/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:32:56 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/11 18:52:58 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int arr[3];
	char str[12] = "Hello world";
	char str2[12] = "Hello world";

	
	memset(str, '.', 11);
	printf("%s\n", str);
	
	memset(str, '.', 11);
	printf("%s\n", str);
	
	memset(arr, 10, 3*sizeof(arr[0])); 
	printf("memset %d\n", arr[0]);
	ft_memset(arr, 155, sizeof(arr)); 
	printf("ft_memset %d\n", arr[0]);
	memset(arr, 399, sizeof(arr)); 
	printf("memset %d\n", arr[0]);
	ft_memset(arr, 399, sizeof(arr)); 
	printf("ft_memset %d\n", arr[0]);
	memset(arr, 155, sizeof(arr)); 
	printf("memset %d\n", arr[0]);
	ft_memset(arr, 155, sizeof(arr)); 
	printf("ft_memset %d\n", arr[0]);
	return (0);
	}*/
		

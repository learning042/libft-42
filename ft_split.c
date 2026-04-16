/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-v <tpinto-v@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:23:44 by tpinto-v          #+#    #+#             */
/*   Updated: 2026/04/15 17:57:10 by tpinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords (char const *str, char sep)
{
	size_t	word_count;
	int		inword;

	inword = 1;
	word_count = 0;
	while (*str)
	{
		if (inword == 1 && *str != sep)
		{
			++word_count;
			while (*str != sep && *str != '\0')
				++str;
			if (*str == '\0')
				return (word_count);
			inword = 0;
		}
		inword = 1;
		++str;
	}
	return (word_count);
}

static size_t	my_strlen(const char *s, char term)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != term)
		len++;
	return (len);
}

static char	*my_strcpy(char *s1, const char *s2, char term)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0' && s2[i] != term)
	{
		s1[i] = s2[i];
		++i;
	}
	s1[i] = '\0';
	return (s1)
}

char	*my_strdup(const char *s, char term)
{
	int		i;
	char	*s_cpy;

	s_cpy = (char *) malloc(my_strlen(s, term) + 1);
	if (s_cpy == NULL)
		return (NULL);
	my_strcpy(s_cpy, s);
	return (s_cpy);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	word_amount;
	size_t	s_location;
	size_t	word_count;

	s_location = 0;
	word_count = 0;
	word_amount = ft_countwords(s, c);
	strings = malloc(word_amount + 1);
	if (strings == NULL)
		return (NULL);
	while (i < word_amount)
	{
		if (s[i] != c)
		{
			while ()
		}
	}
}

#include <stdio.h>
int	main(void)
{
	char const	*str = " hl lor ";
	char		sep = ' ';
	printf("%zu\n", ft_countwords(str, sep));
	return (0);
}

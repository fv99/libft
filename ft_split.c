/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:37:23 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/15 16:10:58 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (words);
}

// modified version of ft_strlcpy below
// changed so the function can accept a const char *src
// as an argument without discarding the const qualifier

static unsigned int	ft_strxcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = 0;
	while (src[x])
		x++;
	i = 0;
	if (size != 0)
	{
		while ((i < size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

// ft_strdup except for only n characters

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	ft_strxcpy(str, s, n + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	string = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (string == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		y = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > y)
		{
			string[x] = ft_strndup(s + y, i - y);
			x++;
		}
	}
	string[x] = NULL;
	return (string);
}

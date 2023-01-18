/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:43 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/18 16:57:49 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_sizetlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	spec_strlen(char *str, char *set)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = ft_sizetlen(str);
	while (i < ft_sizetlen(str))
	{
		if (ft_strchr(set, str[i]))
			counter--;
		else
			break ;
		i++;
	}
	if (!counter)
		return (counter);
	i = ft_sizetlen(str);
	while (--i)
	{
		if (ft_strchr(set, str[i]))
			counter--;
		else
			break ;
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*substr;
	size_t	substr_ctr;
	size_t	i;
	size_t	reduced_strlen;

	if (!s1)
		return (NULL);
	reduced_strlen = spec_strlen((char *)s1, (char *)set);
	substr = ft_calloc(reduced_strlen + 1, sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	substr_ctr = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	while (substr_ctr < reduced_strlen)
		substr[substr_ctr++] = s1[i++];
	return (substr);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*str;
// 	size_t	start;
// 	size_t	end;
// 	size_t	len;

// 	if (!s1)
// 		return (NULL);
// 	if (!set || !*set)
// 		return (ft_strdup((char *)s1));
// 	end = ft_sizetlen((char *)s1) - 1;
// 	start = 0;
// 	while (s1[start] && ft_strchr(set, s1[start]))
// 		++start;
// 	while (s1[end] && ft_strchr(set, s1[end]))
// 		--end;
// 	if (end < start)
// 	 	return (ft_strdup((char *)s1));
// 	len = (end - start) + 1;
// 	str = malloc((sizeof(char) * len + 1));
// 	if (!str)
// 		return (NULL);
// 	str = ft_substr(s1, start, len);
// 	return (str);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:25:43 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/18 15:10:04 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	end = ft_strlen((char *)s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	if (end < start)
		return (ft_strdup(""));
	len = (end - start) + 1;
	str = malloc((sizeof(char) * len + 1));
	if (!str)
		return (NULL);
	str = ft_substr(s1, start, len);
	return (str);
}

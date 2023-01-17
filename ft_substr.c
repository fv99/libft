/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:39:44 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/17 17:47:24 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	ft_strlcpy(a, ((char *) s + start), (len + 1));
	return (a);
}

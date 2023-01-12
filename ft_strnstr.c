/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 00:02:27 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/12 17:04:13 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len && len > 0)
	{
		j = 0;
		while (little[j] && (little[j] == big[i + j] && i + j < len))
			j++;
		if (little[j] == 0)
			return (&((char *)big)[i]);
		i++;
	}
	return (NULL);
}

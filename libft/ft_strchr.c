/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 23:41:56 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/02/22 18:17:43 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *src, int c)
{
	int	i;

	if (!src)
		return (0);
	i = 0;
	while (src[i])
	{
		if (src[i] == (char)c)
			return ((char *)(src + i));
		i++;
	}
	if (src[i] == (char)c)
		return ((char *)(src + i));
	return (0);
}

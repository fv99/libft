/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 23:53:21 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/02/22 18:17:43 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *src, int ch)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	while (i >= 0)
	{
		if (src[i] == (char)ch)
			return ((char *)(src + i));
		i--;
	}
	return (0);
}

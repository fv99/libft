/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:16:05 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/11 21:45:18 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	register const unsigned char	*p1;
	register const unsigned char	*p2;

	if (n != 0)
	{
		p1 = s1;
		p2 = s2;
		while (n-- > 0)
		{
			if (*p1++ != *p2++)
				return (*--p1 - *--p2);
		}
	}
	return (0);
}

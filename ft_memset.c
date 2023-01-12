/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:40:57 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/11 21:37:43 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ch;
	int				i;

	ch = s;
	i = 0;
	while (n > 0)
	{
		ch[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}

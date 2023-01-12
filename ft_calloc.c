/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:32:23 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/12 14:50:27 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t mem, size_t size)
{
	register void	*ptr;

	if (mem == 0 || size == 0)
	{
		mem = 1;
		size = 1;
	}
	ptr = malloc (mem * size);
	if (ptr != 0)
	{
		ft_bzero(ptr, mem * size);
	}
	return (ptr);
}

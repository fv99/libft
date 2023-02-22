/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:18:54 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/02/22 18:09:36 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_string(va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}	

int	putchar_return(va_list *args)
{
	ft_putchar_fd(va_arg(*args, int), 1);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:01:42 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/16 17:12:05 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	list1;
	t_list	list2;

	list1 = ft_lstnew(new);
	if (!*lst)
		*lst = new;
	else
	{
		list2 = ft_lstlast(*lst);
		list2->next = list1;
	}
}

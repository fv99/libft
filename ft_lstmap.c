/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:43:16 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/17 14:56:14 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!f || !del || !lst)
		return (NULL);
	tmp = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (tmp)
			{
				new = tmp->next;
				(*del)(tmp->content);
				free(tmp);
				tmp = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		lst = lst->next;
	}
	return (tmp);
}

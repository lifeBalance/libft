/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:41:03 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/14 19:22:40 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*mapped_lst;
	t_list	*prev;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	mapped_lst = NULL;
	while (lst)
	{
		temp = f(lst);
		if (!mapped_lst)
		{
			mapped_lst = temp;
			prev = temp;
		}
		else
		{
			prev->next = temp;
			prev = prev->next;
		}
		lst = lst->next;
	}
	return (mapped_lst);
}

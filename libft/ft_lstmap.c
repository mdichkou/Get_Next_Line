/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 02:37:56 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/13 22:59:21 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*lsta;

	temp = f(lst);
	lsta = temp;
	if (lst != NULL)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
			temp->next = f(lst);
			temp = temp->next;
		}
		return (lsta);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 21:51:24 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/13 14:18:07 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*blst;

	blst = *alst;
	while (blst != NULL)
	{
		tmp = blst->next;
		del(blst->content, blst->content_size);
		free(blst);
		blst = NULL;
		blst = tmp;
	}
	*alst = NULL;
}

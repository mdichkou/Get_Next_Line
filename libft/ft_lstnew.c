/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 04:25:36 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/21 12:20:13 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ele;

	if (!(ele = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		ele->content = NULL;
		ele->content_size = 0;
	}
	else
	{
		if (!(ele->content = malloc(sizeof(content_size))))
			return (NULL);
		ft_memmove(ele->content, content, content_size);
		ele->content_size = content_size;
	}
	ele->next = NULL;
	return (ele);
}

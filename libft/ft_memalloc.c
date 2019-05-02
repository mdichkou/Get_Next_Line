/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 01:19:09 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/10 14:08:17 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char				*temp;
	unsigned	int		i;

	temp = (char*)malloc(size);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		temp[i] = '\0';
		i++;
	}
	return ((void*)temp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 03:49:36 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 16:35:46 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char	*temp;
	unsigned	int		i;
	unsigned	char	c1;

	temp = b;
	c1 = c;
	i = 0;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}

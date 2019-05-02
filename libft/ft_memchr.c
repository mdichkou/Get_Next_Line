/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:13:45 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 16:34:36 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned	char	*s1;
	unsigned	int		i;
	unsigned	char	c1;

	s1 = (unsigned	char*)s;
	c1 = (unsigned	char)c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}

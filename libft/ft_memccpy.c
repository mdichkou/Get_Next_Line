/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:59:50 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/09 11:26:27 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned	char	c1;
	unsigned	char	*s1;
	unsigned	char	*s2;
	unsigned	int		i;

	c1 = c;
	s1 = (unsigned	char*)dst;
	s2 = (unsigned	char*)src;
	i = 0;
	while (i < n)
	{
		*s1 = *s2;
		if (*s2 == c1)
			return (dst + i + 1);
		s1++;
		s2++;
		i++;
	}
	return (NULL);
}

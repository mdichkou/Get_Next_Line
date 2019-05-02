/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:57:11 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/17 17:23:30 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned	char	*s1;
	unsigned	char	*s2;
	unsigned	int		i;

	i = 0;
	s1 = (unsigned	char*)ft_strndup(src, len);
	s2 = (unsigned	char*)dst;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dst);
}

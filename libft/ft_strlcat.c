/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:29:24 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 14:35:31 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned	int		i;
	unsigned	int		j;
	unsigned	int		len;

	j = 0;
	i = ft_strlen(dst);
	len = 0;
	while (dst[len] && len < size)
		len++;
	if (size - len == 0)
		return (ft_strlen(src) + size);
	while (j < (size - i) - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}

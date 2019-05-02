/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 00:40:02 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 17:31:12 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_find(const char *haystack,
	const char *needle, size_t len)
{
	while (*needle != '\0' && *haystack != '\0' && len >= ft_strlen(needle))
	{
		if (*needle != *haystack)
			return (0);
		needle++;
		haystack++;
		len--;
	}
	if (*haystack == '\0' && *needle != '\0')
		return (0);
	return (1);
}

char			*ft_strnstr(const char *haystack,
		const char *needle, size_t len)
{
	if (*haystack == '\0')
		return (NULL);
	if (*needle == '\0')
		return ((char*)haystack);
	while (len >= ft_strlen(needle) && *haystack != '\0')
	{
		if (ft_find(haystack, needle, len) == 1 && *needle == *haystack)
			return ((char*)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

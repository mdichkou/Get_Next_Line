/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:23:47 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 17:28:17 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_find_here(const char *haystack, const char *needle)
{
	while (*needle != '\0' && *haystack != '\0')
	{
		if (*needle != *haystack)
			return (0);
		needle++;
		haystack++;
	}
	if (*haystack == '\0' && *needle != '\0')
		return (0);
	return (1);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle && ft_find_here(haystack, needle) == 1)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}

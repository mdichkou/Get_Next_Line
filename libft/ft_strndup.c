/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 19:55:41 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/17 17:23:33 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char				*s2;
	unsigned	int		i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	else
	{
		while (i < len)
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:40:34 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/13 03:29:13 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;
	char	c1;

	c1 = (char)c;
	temp = (char*)s;
	while (*temp != '\0')
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	if (*temp == c)
		return (temp);
	return (NULL);
}

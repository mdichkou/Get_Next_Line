/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 03:24:48 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/08 19:05:00 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		i;

	i = 0;
	temp = (char*)s;
	while (*temp != '\0')
	{
		temp++;
		i++;
	}
	while (i-- >= 0)
	{
		if (*temp == c)
			return (temp);
		temp--;
	}
	return (NULL);
}

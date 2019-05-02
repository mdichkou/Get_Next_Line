/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 13:04:36 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/13 15:44:07 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned	int		c1;
	unsigned	int		c2;
	unsigned	int		i;

	i = 0;
	c1 = 0;
	c2 = 0;
	if (n == 0)
		return (0);
	while (s1[c1] == s2[c2] && i < n && s1[c1])
	{
		c1++;
		c2++;
		i++;
		if (i + 1 == n)
			return ((unsigned char)s1[c1] - (unsigned char)s2[c2]);
	}
	return ((unsigned char)s1[c1] - (unsigned char)s2[c2]);
}

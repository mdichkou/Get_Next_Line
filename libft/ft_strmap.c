/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 02:55:27 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/13 22:38:57 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char				*temp;
	unsigned	int		i;

	i = 0;
	if (s != NULL)
	{
		if (!(temp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (i < ft_strlen(s))
		{
			temp[i] = f(s[i]);
			i++;
		}
		temp[i] = '\0';
		return (temp);
	}
	return (NULL);
}

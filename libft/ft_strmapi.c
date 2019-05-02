/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 03:21:32 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/13 22:39:11 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*temp;
	unsigned	int		i;

	i = 0;
	if (s != NULL)
	{
		if (!(temp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[i] != '\0')
		{
			temp[i] = f(i, s[i]);
			i++;
		}
		temp[i] = '\0';
		return (temp);
	}
	return (NULL);
}

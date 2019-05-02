/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:57:32 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/19 20:40:29 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		i;
	int		j;

	if (s1 != NULL && s2 != NULL)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		if (!(temp = (char*)malloc(sizeof(char) * i + j + 1)))
			return (NULL);
		ft_strcpy(temp, s1);
		ft_strcat(temp, s2);
		return (temp);
	}
	return (NULL);
}

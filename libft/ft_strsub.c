/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 13:46:43 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/13 22:43:58 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*temp;

	if (!(temp = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (s != NULL)
	{
		ft_memmove(temp, s + start, len);
		temp[len] = '\0';
		return (temp);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 01:44:37 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/10 11:00:07 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char				*temp;
	unsigned	int		i;

	if (!(temp = malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		temp[i] = '\0';
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

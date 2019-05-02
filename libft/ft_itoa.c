/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 23:50:19 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 16:31:29 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(int n)
{
	int					i;
	unsigned	int		nb;

	i = 0;
	if (n < 0)
	{
		i++;
		nb = n * -1;
	}
	else
		nb = n;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	i++;
	return (i);
}

static	char	*ft_savenbr(size_t tmp, int j, char *nb, int size)
{
	while (tmp >= 10)
	{
		nb[--size] = (tmp % 10) + '0';
		tmp = tmp / 10;
		j++;
	}
	nb[size - 1] = tmp + '0';
	nb[j + 1] = '\0';
	return (nb);
}

char			*ft_itoa(int n)
{
	int					size;
	char				*nb;
	int					j;
	unsigned	int		tmp;

	size = ft_count(n);
	j = 0;
	if (!(nb = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (n < 0)
	{
		tmp = n * -1;
		nb[j] = '-';
		j++;
	}
	else
		tmp = n;
	return (ft_savenbr(tmp, j, nb, size));
}

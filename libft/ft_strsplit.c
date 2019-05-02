/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 00:44:32 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 17:22:29 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_word(char const *s, char c)
{
	int		nb;

	nb = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			nb++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (nb);
}

static	int	*ft_count_char(char const *s, char c)
{
	int		*nb;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!(nb = (int*)malloc(sizeof(int) * ft_count_word(s, c))))
		return (NULL);
	while (*s != '\0' && ft_count_word(s, c) > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		i = 0;
		while (*s != c && *s != '\0')
		{
			s++;
			i++;
		}
		nb[j] = i;
		j++;
		s++;
	}
	return (nb);
}

char		**ft_strsplit2(char const *s, char c)
{
	char	**dst;
	int		*nb;
	int		i;
	int		j;

	j = 0;
	nb = ft_count_char(s, c);
	i = ft_count_word(s, c);
	if (!(dst = (char**)malloc(sizeof(char*) * ft_count_word(s, c))))
		return (NULL);
	while (j < i)
	{
		if (!(dst[j] = (char*)malloc(sizeof(char) * nb[j])))
			return (NULL);
		while (*s == c && *s != '\0')
			s++;
		dst[j] = ft_strsub(s, 0, nb[j]);
		s = s + nb[j];
		j++;
	}
	dst[j] = NULL;
	return (dst);
}

char		**ft_strsplit(char const *s, char c)
{
	if (s != NULL)
	{
		return (ft_strsplit2(s, c));
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:57:19 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/14 16:32:29 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned	int	ft_counter_back(char const *s)
{
	unsigned	int	i;

	while (*s)
	{
		s++;
	}
	s--;
	i = 0;
	while (*s != '\0' && (*s == ' ' || *s == '\n' || *s == '\t'))
	{
		s--;
		i++;
	}
	return (i);
}

static	unsigned	int	ft_counter_front(char const *s)
{
	unsigned	int	i;

	i = 0;
	while (*s != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i++;
	}
	return (i);
}

char					*ft_strtrim(char const *s)
{
	char				*temp;
	unsigned	int		len;
	unsigned	int		n;

	if (s != NULL)
	{
		n = 0;
		len = ft_strlen(s) - (ft_counter_front(s) + ft_counter_back(s));
		if (ft_strlen(s) - ft_counter_front(s) == 0)
			len = 0;
		if (!(temp = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (n < len)
		{
			temp[n] = s[ft_counter_front(s) + n];
			n++;
		}
		temp[len] = '\0';
		return (temp);
	}
	return (NULL);
}

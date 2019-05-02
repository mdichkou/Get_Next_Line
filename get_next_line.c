/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_tmp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 19:45:15 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/23 11:38:57 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_puts(char **str, int c)
{
	char	*temp;
	int		i;
	int		j;

	i = ft_strlen(*str);
	temp = ft_strnew(i);
	j = 0;
	while ((*str)[j] && (*str)[j] != c)
	{
		temp[j] = (*str)[j];
		j++;
	}
	temp[j] = '\0';
	i = 0;
	if ((*str)[j] == '\n')
		j++;
	while ((*str)[j])
		(*str)[i++] = (*str)[j++];
	while ((*str)[i])
		(*str)[i++] = '\0';
	return (temp);
}

int		ft_checker(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

t_list	*ft_list(t_list **list, const int fd)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	if (!(tmp2 = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	tmp2->content = ft_strnew(BUFF_SIZE);
	tmp2->content_size = fd;
	tmp2->next = NULL;
	ft_lstadd(list, tmp2);
	return (*list);
}

int		ft_read(char **line, char **str, const int fd)
{
	int		ret;

	while ((ret = read(fd, *str, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		(*str)[ret] = '\0';
		if (ft_checker(*str) == 0)
			*line = ft_strjoin(*line, ft_puts(str, '\n'));
		else
		{
			*line = ft_strjoin(*line, ft_puts(str, '\n'));
			return (1);
		}
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static	t_list	*list;
	t_list			*tmp;
	int				ret;
	int				c;

	if (fd < 0 || !line || BUFF_SIZE < 0)
		return (-1);
	tmp = ft_list(&list, fd);
	*line = ft_strnew(0);
	c = 0;
	if ((c = ft_checker((char*)tmp->content)) != -1)
	{
		*line = ft_strjoin(*line, ft_puts((char**)&tmp->content, '\n'));
		if (c == 1)
			return (1);
	}
	if (ft_checker((char*)tmp->content) == 1)
		c = 1;
	if ((ret = ft_read(line, (char**)&tmp->content, fd)) != 0)
		return (ret);
	if ((*line)[0] == '\0')
		return (0);
	return (1);
}

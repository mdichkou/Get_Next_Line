/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdichkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 16:52:56 by mdichkou          #+#    #+#             */
/*   Updated: 2018/10/22 14:48:55 by mdichkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
# include "./libft/libft.h"
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif

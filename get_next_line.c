/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:16:32 by mac               #+#    #+#             */
/*   Updated: 2019/11/12 01:45:54 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int apline(char **stack, char **line)
{
	int		length;
	char	*tmp;

	length = 0;
	while((*stack)[length] != '\n' && (*stack)[length] != '\0')
		length++;
	if ((*stack)[length] == '\n')
	{
		*line = ft_strsub(*stack, 0, length);
		tmp = ft_strdup(&((*stack)[length + 1]));
		free(*stack);
		*stack = tmp;
		if ((*stack)[0] == '\0')
			ft_strdel(stack);
	}
	else
	{
		*line = ft_strdup(*stack);
		ft_strdel(stack);
	}
	return (1);
}

static int	gnl_output(char **stack, char **line, int ptr, int fd)
{
	if (ptr < 0)
		return(-1);
	else if (ptr == 0 && stack[fd] == NULL)
		return (0);
	else
		return(apline(&stack[fd], line));
}

int get_next_line(const int fd, char **line)
{
	static char	*stack[MAX_FD];
	char	*buf;
	char	*tmp;
	int		ptr;

	if (!line || (fd < 0 || fd > MAX_FD) || read(fd,stack[fd],0) < 0
	|| (!(buf = ft_memalloc(BUFF_SIZE + 1))))
		return (-1);
	while ((ptr = read(fd,buf,BUFF_SIZE)) > 0)
	{
		buf[ptr] = '\0';
		if (stack[fd] == NULL)
			stack[fd] = ft_strdup(buf);
		else
		{
			tmp = ft_strjoin(stack[fd], buf);
			free(stack[fd]);
			stack[fd] = tmp;
		}
		if (ft_strchr(stack[fd], '\n'))
			break ;
	}
	return (gnl_output(stack, line, ptr, fd));
}

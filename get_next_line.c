/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:16:32 by mac               #+#    #+#             */
/*   Updated: 2019/11/11 08:47:07 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
	char	*buf;
	buf = ft_memmalloc(BUFF_SIZE + 1);
	if (read(fd,buf,BUFF_SIZE) < 0 || !line || (fd < 0 || fd > MAX_FD) )
		return (-1);
	while ((read(fd,buf,BUFF_SIZE)) != 0)
	{
		buf = ft_strjoin();
	}
	return 0;
}

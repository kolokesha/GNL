/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:23:35 by mac               #+#    #+#             */
/*   Updated: 2019/11/11 08:47:07 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/uio.h>
#include<unistd.h>
#include "get_next_line.h"

char buf[10];

int	main()
{
	char	*line;
	int		fd,bytes;
	if((bytes = read(fd,buf,BUFF_SIZE))==-1)
   {
      printf("Ошибка чтения.\n");
      exit(1);
   }
   printf("Считано %d байт.\n",bytes);
   printf("%d", fd);
   get_next_line(fd, &line);
   return 0;
}

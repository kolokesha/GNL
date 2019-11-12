/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:23:35 by mac               #+#    #+#             */
/*   Updated: 2019/11/12 00:11:10 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	main(int ac, char **av)
{
	char  *line;
   int fd1;
   int fd2;

   fd1 = open(av[1], O_RDONLY);
   fd2 = open(av[2], O_RDONLY);
   get_next_line(fd1, &line);
   printf("%s\n", line);
   get_next_line(fd1, &line);
   printf("%s\n", line);
   get_next_line(fd2, &line);
   printf("%s\n", line);
   get_next_line(fd2, &line);
   printf("%s\n", line);
   get_next_line(fd1, &line);
   printf("%s\n", line);
   get_next_line(fd2, &line);
   printf("%s\n", line);
   get_next_line(fd1, &line);
   printf("%s\n", line);
   get_next_line(fd2, &line);
   printf("%s\n", line);
   return (0);
}

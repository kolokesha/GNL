#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 2
# define MAX_FD 1024 + 1
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/libft.h"

int				get_next_line(const int fd, char **line);

#endif

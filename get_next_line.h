#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# define BUFF_SIZE 15
# define MAX_FD 1024 + 1

int				get_next_line(const int fd, char **line);

#endif

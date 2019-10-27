#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# define BUFF_SIZE 15

typedef struct s_gnl
{
	char			*str;
	int				fd_gnl;
	struct s_gnl	*next;
}					t_gnl;

int				get_next_line(const int fd, char **line);

#endif

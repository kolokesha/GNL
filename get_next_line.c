#include "get_next_line.h"

void	record_data(t_gnl **gnl_list, int const fd)
{
	t_gnl	*tmp;
	t_gnl	*new;

	if(gnl_list == NULL)
	{
		if(!(*gnl_list = (t_gnl*)ft_memalloc(sizeof(t_gnl))))
			return (NULL);
		(*gnl_list)->fd_gnl = fd;
		(*gnl_list)->str = NULL;
		(*gnl_list)->next = NULL;
	}
	tmp = *gnl_list;
	while(tmp)
	{
		if (tmp->fd_gnl == fd)
			return(tmp);
		tmp = tmp->next;
	}
	if (tmp!= NULL)
		*gnl_list = tmp;
	if (!(new = (t_gnl*)ft_memalloc(sizeof(t_gnl))))
		return (NULL);
	return (gnl_list);
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*gnl_list;
	t_gnl			*tmp_list;
	char			buf[BUFF_SIZE];

	if (fd < 0 || line == NULL || read(fd, buf, 0))
		return (-1);
	tmp_list = record_data(&gnl_list, fd);
}

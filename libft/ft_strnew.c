/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:31:38 by malbert           #+#    #+#             */
/*   Updated: 2019/09/26 14:39:58 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (size + 1 == 0)
		return (NULL);
	if (!(tmp = malloc(size + 1)))
		return (NULL);
	ft_memset(tmp, (int)'\0', size + 1);
	return (tmp);
}

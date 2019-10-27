/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:42:08 by malbert           #+#    #+#             */
/*   Updated: 2019/09/11 23:10:11 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		i;
	char	*tmp;
	int		length;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	if (!str || !(tmp = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (i <= length)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

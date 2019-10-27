/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:31:15 by malbert           #+#    #+#             */
/*   Updated: 2019/09/17 17:40:29 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len1;
	unsigned int	len2;
	char			*tmp;
	size_t			i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2 || !(tmp = (char*)malloc(sizeof(char) * (len1 + len2 + 2))))
		return (NULL);
	i = 0;
	ft_strcpy(tmp, s1);
	ft_strcat(tmp, s2);
	return (tmp);
}

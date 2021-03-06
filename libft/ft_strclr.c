/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:40:52 by malbert           #+#    #+#             */
/*   Updated: 2019/09/14 01:42:52 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;
	char	*str;

	str = (char*)s;
	if (!s || !str)
		return ;
	i = 0;
	if (str)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}

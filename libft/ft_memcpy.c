/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:00:06 by malbert           #+#    #+#             */
/*   Updated: 2019/09/14 00:07:43 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *str;
	unsigned char *tmp;

	str = (unsigned char*)dest;
	tmp = (unsigned char*)src;
	if (!str && !tmp)
		return (0);
	while (n-- > 0)
		*(str++) = *(tmp++);
	return (dest);
}

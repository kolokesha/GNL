/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:40:25 by malbert           #+#    #+#             */
/*   Updated: 2019/09/26 13:53:52 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*atmp;
	t_list	*anext;

	atmp = *alst;
	while (atmp)
	{
		anext = atmp->next;
		del(atmp->content, (atmp->content_size));
		free(atmp);
		atmp = anext;
	}
	*alst = NULL;
}

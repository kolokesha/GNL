/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfold.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:54:24 by malbert           #+#    #+#             */
/*   Updated: 2019/10/01 12:59:26 by malbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstfold(t_list *lst, void *(*f)(void *, void *))
{
	t_list	*list;
	void	*res;

	if (!lst || !f || !*f || !*(*f))
		return 0;
	list = lst;
	res = list->content;
	list = list->next;
	while (list)
	{
		res = f(res, list->content);
		list = list->next;
	}
	return (res);
}

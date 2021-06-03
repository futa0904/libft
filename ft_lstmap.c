/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 02:37:15 by yrina             #+#    #+#             */
/*   Updated: 2021/04/28 12:22:42 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*ret;

	p = 0;
	ret = 0;
	while (lst)
	{
		p = ft_lstnew((*f)(lst->content));
		if (!p)
		{
			ft_lstclear(&p, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, p);
		lst = lst->next;
	}
	return (ret);
}

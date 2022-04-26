/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:17:23 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/15 16:36:01 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*next;

	start = NULL;
	while (lst != NULL)
	{
		if (!f)
			break ;
		next = ft_lstnew(f(lst -> content));
		if (!next)
			ft_lstclear(&start, del);
		ft_lstadd_back(&start, next);
		lst = lst -> next;
	}
	return (start);
}

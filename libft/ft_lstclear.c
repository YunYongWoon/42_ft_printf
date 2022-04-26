/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:02:11 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/11 20:03:56 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*temp;

	if (!lst || !del || !*lst)
		return ;
	cur = *lst;
	while (cur != NULL)
	{
		temp = cur;
		cur = cur -> next;
		del(temp -> content);
		free(temp);
	}
	*lst = 0;
}

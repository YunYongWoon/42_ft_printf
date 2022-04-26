/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 01:07:34 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 13:58:15 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_pos;

	i = 0;
	last_pos = 0;
	while (1)
	{
		if (s[i] == c)
			last_pos = (char *)s + i;
		if (!s[i])
			break ;
		i++;
	}
	if (last_pos)
		return (last_pos);
	else
		return (0);
}

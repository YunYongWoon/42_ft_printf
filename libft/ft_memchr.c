/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:13:34 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 12:14:38 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cmp;
	unsigned char	tester;

	i = 0;
	tester = c;
	cmp = (unsigned char *)s;
	while (i < n)
	{
		if (cmp[i] == tester)
			return ((void *)cmp + i);
		i++;
	}
	return (0);
}

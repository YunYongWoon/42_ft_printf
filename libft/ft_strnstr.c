/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:33:25 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 19:46:46 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_same(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && needle[i] && haystack[i])
	{
		if (haystack[i] != needle[i])
			return (0);
		i++;
	}
	if (i == len && needle[i])
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0] && is_same(haystack + i, needle, len - i))
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:30:59 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/15 16:29:00 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_size;
	size_t	idx;
	char	*output;

	if (!s || !f)
		return (0);
	s_size = ft_strlen(s);
	output = (char *)ft_calloc((s_size + 1), sizeof(char));
	if (!output)
		return (0);
	idx = 0;
	while (idx < s_size)
	{
		output[idx] = f(idx, s[idx]);
		idx++;
	}
	output[idx] = 0;
	return (output);
}

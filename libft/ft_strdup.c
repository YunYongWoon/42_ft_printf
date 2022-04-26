/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:24:08 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/11 13:29:31 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	size_t	i;
	char	*output;

	size = ft_strlen(s1);
	i = 0;
	output = (char *)malloc(sizeof(char) * size + 1);
	if (!output)
		return (0);
	while (i < size)
	{
		output[i] = s1[i];
		i++;
	}
	output[i] = 0;
	return (output);
}

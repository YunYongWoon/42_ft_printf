/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:58:33 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/16 16:44:03 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	size_t	i;
	char	*output;

	if (!s1)
		return (0);
	if (!set || !*s1 || !*set)
		return (ft_strdup(s1));
	front = 0;
	rear = ft_strlen(s1) - 1;
	while (is_set(s1[front], set) && front < rear)
		front++;
	while (is_set(s1[rear], set) && rear > front)
		rear--;
	if (front == rear && rear == (ft_strlen(s1) - 1))
		rear--;
	output = (char *)ft_calloc((rear - front + 2), sizeof(char));
	if (!output)
		return (0);
	i = 0;
	while (front <= rear)
		output[i++] = s1[front++];
	return (output);
}

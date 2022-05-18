/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:58:18 by yoyun             #+#    #+#             */
/*   Updated: 2022/05/18 15:28:59 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_change_func.h"

static int	pf_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_change_string(va_list ap)
{
	char	*s;

	s = va_arg(ap, char *);
	if (s == 0)
		return (write(1, "(null)", 6));
	return (write(1, s, pf_strlen(s)));
}

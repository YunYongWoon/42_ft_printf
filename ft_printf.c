/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:08:24 by yoyun             #+#    #+#             */
/*   Updated: 2022/04/26 16:48:14 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		ret_val;

	va_start(ap, s);
	ret_val = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
				ret_val += write(1, s, 1);
			else
				ret_val += logic_function(ap, s);
		}
		else
			ret_val += write(1, s, 1);
		s++;
	}
	va_end(ap);
	return (ret_val);
}

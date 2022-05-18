/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:50:03 by yoyun             #+#    #+#             */
/*   Updated: 2022/05/18 18:08:12 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_logic.h"

int	logic_function(va_list ap, const char *s)
{
	if (*s == 'c')
		return (ft_change_character(ap));
	else if (*s == 's')
		return (ft_change_string(ap));
	else if (*s == 'p')
		return (ft_change_addr(ap));
	else if (*s == 'x' || *s == 'X')
		return (ft_change_hex(ap, s));
	else if (*s == 'i' || *s == 'd')
		return (ft_change_num(ap));
	else if (*s == 'u')
		return (ft_change_unsigned_num(ap));
	return (0);
}

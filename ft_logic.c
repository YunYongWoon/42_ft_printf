/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:50:03 by yoyun             #+#    #+#             */
/*   Updated: 2022/04/26 17:00:46 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_logic.h"

int	logic_function(va_list ap, const char *s)
{
	if (*s == 'c')
		return (ft_change_character(ap));
	else if (*s == 's')
		return (ft_change_string(ap));
	// else if (*s == 'p')
	// 	// 주소
	// else if (*s == 'i' || *s == 'd')
	// 	// Integer Logic
	// else if (*s == 'X')
	// 	// 16 Logic
	// else if (*s == 'p')
	// 	//pointer
	// else if (*s == 'u')
	// 	// unsigned int
	// else if (*s == 'x')
	// 	// lower 16
	// else if (*s == 'X')
	// 	// high 16
	return (0);
}

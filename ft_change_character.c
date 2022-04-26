/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_character.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 00:47:33 by yoyun             #+#    #+#             */
/*   Updated: 2022/04/26 16:10:28 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	ft_change_character(va_list ap, const char *s)
{
	char	c;

	c = va_arg(ap, int);
	return (write(1, &c, 1));
}

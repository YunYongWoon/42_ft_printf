/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:23:42 by yoyun             #+#    #+#             */
/*   Updated: 2022/05/18 18:06:27 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_change_func.h"

static int	pf_check_int_digit(unsigned int addr)
{
	int	count;

	count = 0;
	if (addr == 0)
		return (1);
	while (addr != 0)
	{
		addr /= 16;
		count++;
	}
	return (count);
}

static void	pf_change_hex(unsigned int input, int digit, char *hex)
{
	if (digit <= 0)
		return ;
	pf_change_hex(input / 16, digit - 1, hex);
	write(1, &hex[input % 16], 1);
	return ;
}

int	ft_change_hex(va_list ap, const char *c)
{
	unsigned int	input;
	int				digit;

	input = va_arg(ap, unsigned int);
	digit = pf_check_int_digit(input);
	if (*c == 'x')
		pf_change_hex(input, digit, "0123456789abcdef");
	else if (*c == 'X')
		pf_change_hex(input, digit, "0123456789ABCDEF");
	return (digit);
}
